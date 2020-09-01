#include "PlaylistIterator.h"
#include "DigitalMedia.h"



PlaylistIterator:: PlaylistIterator(std::vector<DigitalMedia*>::iterator it, int totalSeconds, int secondsPlayedSoFar)
: totalSeconds{totalSeconds},secondsPlayedSoFar{secondsPlayedSoFar},currit{it}{}

DigitalMedia *PlaylistIterator:: operator*(){
    return *currit;
}

int PlaylistIterator::getElapsedTime() const{
    return secondsPlayedSoFar;
}

PlaylistIterator PlaylistIterator:: operator++(){
    secondsPlayedSoFar += (*currit)->getDuration();
    currit++;
    return *this;
}

bool PlaylistIterator:: operator==(const PlaylistIterator &other) const{
    return (currit == other.currit);
}

bool PlaylistIterator:: operator!=(const PlaylistIterator &other) const{
    return (currit != other.currit);
}




