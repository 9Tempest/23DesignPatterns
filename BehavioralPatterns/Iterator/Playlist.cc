#include "Playlist.h"
#include "Song.h"
#include "TV.h"


Playlist::Playlist():totalSeconds{0},secondsPlayedSoFar{0}{}

Playlist::~Playlist(){}

PlaylistIterator Playlist::begin(){
    return PlaylistIterator(media.begin(),totalSeconds,0);
}

PlaylistIterator Playlist::end(){
    return PlaylistIterator(media.end(),totalSeconds,totalSeconds);
}

void Playlist:: reset(){
    secondsPlayedSoFar = 0;
}

void Playlist::add(DigitalMedia *m){
    for (auto n = media.begin(); n != media.end(); ++n){
        if (m->getKey() == (*n)->getKey()) return;
    }
    media.emplace_back(m);
    totalSeconds += m->getDuration();
}

void Playlist::remove(DigitalMedia *m){
    for (auto n = media.begin(); n != media.end(); ++n){
        if (m->getKey() == (*n)->getKey()) {
            totalSeconds -= m->getDuration();
            media.erase(n);
            return;
        }
    }
}

int Playlist::getTotalSeconds() const{
    return totalSeconds;
}

std::ostream & operator<<( std::ostream & out, Playlist & p ){
    int i = 0;
    for (auto n : p.media){
        Song *s = dynamic_cast<Song *>(n);
        if (s != nullptr) {
            out << '\t' << std::setfill('0') << std::setw(3) << i << ": " << *s << std::endl;
        }   else {
            TV *t = dynamic_cast<TV *>(n);
            out << '\t' << std::setfill('0') << std::setw(3) << i << ": "<< *t << std::endl;
        }
        i++;
    }
    out << "Total: " << p.getTotalSeconds() << " seconds\n";
    return out;
}