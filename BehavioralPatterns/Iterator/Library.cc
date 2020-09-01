#include "Library.h"
#include "LibraryIterator.h"
#include "DigitalMedia.h"
#include "Song.h"
#include "TV.h"
#include <cstdio>

Library::Library(){}

Library::~Library(){
    for (auto n : media) delete n;
    media.clear();    
}

LibraryIterator Library::begin(){
    return LibraryIterator(media.begin());
}

LibraryIterator Library::end(){
    return LibraryIterator(media.end());
}

void Library::add(DigitalMedia *m){
    
    for (auto n = media.begin(); n != media.end(); ++n){
        if (m->getKey() == (*n)->getKey()) {
            std::string s = "key " + m->getKey() + " already exists in library";
            throw std::logic_error{s};
        }
        if (m->getKey() < (*n)->getKey()) {
            media.insert(n,m);
            return;
        }
    }
    media.emplace_back(m);
}

void Library::remove(std::string key){
    for (auto n = media.begin(); n != media.end(); ++n){
        if (key == (*n)->getKey()) {
            media.erase(n);
            return;
        }
    }
}

DigitalMedia * Library::find( std::string key ){
    for (auto n = media.begin(); n != media.end(); ++n){
        if (key == (*n)->getKey()) {
            return *n;
        }
    }
    return nullptr;
}

std::istream & operator>>( std::istream & in, Library & library ){
    
    TV t1{ "1", "Somewhere far away, and long ago", 2580, 1, 1, "Amazing New Show" };
    Song s1{ "1", "Great beat and you can dance to it", 183, "Too cool", 
        "I'd give it a 10!", "Eclectic" };
    std::string line;
    while (1){
        char arg;
        in >> arg; 
        std::getline(in, line);
        if (in.fail()) break; 
        if (arg == 's'){
                in >> s1;
                library.add(new Song{s1});
        }  
        else if (arg == 't'){
                in >> t1;
                library.add(new TV{t1});
        }   else {
            std::runtime_error err("invalid media type");
            throw err;
        }
        
    }
    return in;
}

std::ostream & operator<<( std::ostream & out, Library & library ){
    out << "Library:\n";
    for (auto n : library){
        Song *s = dynamic_cast<Song *>(n);
        if (s != nullptr) {
            out << '\t' << *s << std::endl;
        }   else {
            TV *t = dynamic_cast<TV *>(n);
            out << '\t' << *t << std::endl;
        }
    }
    return out;
}
