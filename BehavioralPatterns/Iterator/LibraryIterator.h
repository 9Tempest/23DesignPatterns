#ifndef _LIBRARY_ITERATOR
#define _LIBRARY_ITERATOR
#include <vector>
#include <string>
class Library; // forward declarations
class DigitalMedia;

class LibraryIterator {
    friend class Library;
    std::vector<DigitalMedia*>::iterator currit;
    // *** fill in

    explicit LibraryIterator( std::vector<DigitalMedia*>::iterator it);  // Private constructor

public:
    DigitalMedia * operator*();
    LibraryIterator operator++();
    bool operator==(const LibraryIterator &other) const;
    bool operator!=(const LibraryIterator &other) const;    
};

#endif
