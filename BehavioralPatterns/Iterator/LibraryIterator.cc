#include "LibraryIterator.h"

LibraryIterator::LibraryIterator( std::vector<DigitalMedia*>::iterator it):currit{it}{}

DigitalMedia * LibraryIterator::operator*(){
    return *currit;
}
LibraryIterator LibraryIterator::operator++(){
    currit++;
    return *this;
}
bool LibraryIterator::operator==(const LibraryIterator &other) const{
    return (currit == other.currit);
}
bool LibraryIterator::operator!=(const LibraryIterator &other) const{
    return (currit != other.currit);
}