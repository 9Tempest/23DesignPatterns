#ifndef _LIBRARY_
#define _LIBRARY_

#include <string>
#include <iostream>
#include <vector>


class DigitalMedia; // forward declaration
class LibraryIterator;

class Library {
    friend std::ostream & operator<<( std::ostream & out, Library & lib );
    std::vector<DigitalMedia*> media;

public:
    Library();                       // Creates empty library.
    ~Library();                      // Destroys all items in library.
    LibraryIterator begin();         // Iterator set to beginning of library contents.
    LibraryIterator end();           // Iterator set past end of library contents.

    // Stores item, indexed by key. If key already exists, raises std::logic_error
    // and specifies as the message that "key KKKK already exists in library".
    void add( DigitalMedia * m );    

    void remove( std::string key );  // Remove item if find key value else does nothing.

    // Returns pointer to item, or nullptr if not there.
    DigitalMedia * find( std::string key ); 
};

// Returns modified output stream. Stream contains the header "Library:\n" and the library
// contents, ordered by key. Each object is output using the appropriate output operator
// for the underlying object type, one per line and starting with a tab character.
std::ostream & operator<<( std::ostream & out, Library & library );

// Returns modified input stream. Contents of library modified with information read in, 
// where the character 't' on a line specifies a TV show is to be read next, while 's'
// indicates that a Song is to be read in next. Reading continues until EOF is reached
// or an exception is raised. Raises std::runtime_error( "invalid media type" ) if doesn't
// get either 's' or 't'.
std::istream & operator>>( std::istream & in, Library & library );

#endif
