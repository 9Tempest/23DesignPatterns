#include "TV.h"
#include "Song.h"
#include "Library.h"
#include "Playlist.h"
#include <fstream>

const int MAX_NUM_PLAYLISTS = 5;

int main() {
    // Initial dummy values for a song and a TV show to facilitate reading in information
    // over top of an existing object.
    TV t1{ "TV01", "Somewhere far away, and long ago", 2580, 1, 1, "Amazing New Show" };
    Song s1{ "S01", "Great beat and you can dance to it", 183, "Too cool", 
        "I'd give it a 10!", "Eclectic" };

    Playlist plists[MAX_NUM_PLAYLISTS];
    Playlist * curPList = nullptr;
    PlaylistIterator it = plists[0].begin(); // initial dummy value so can declare variable
    Library media;
    DigitalMedia *mptr;
    char command, dmtype, arg;
    std::string line, key, filename;
    int index;

    while ( true ) {
        std::cin >> command;

        // Terminate the program if enter 'q' or reach EOF.
        if ( std::cin.fail() || command == 'q' ) break;

        switch( command ) {
            case 'p':
                // "p m" prints the contents of the media library.
                // "p p <idx>" prints the contents of the playlist at index <idx>
                std::cin >> arg;
                if ( arg == 'm' ) { 
                    std::cout << media;
                } else if ( arg == 'p' ) {
                    std::cin >> index;
                    if ( index >= 0 && index < MAX_NUM_PLAYLISTS ) {
                        std::cout << "Playlist[" << index <<"]:\n" << plists[index];
                    }
                } // if 
                break;

            case 'r':
                // "r <key>" removes the item with the specified key from the media item. Silently
                // does nothing if such an item doesn't exist.
                std::cin >> key;
                mptr = media.find( key );
                if ( mptr ) { 
                    for ( int i = 0; i < MAX_NUM_PLAYLISTS; i++ ) {
                        plists[i].remove( mptr );
                    }
                    media.remove( key );
                    delete mptr;
                } // if
                break;

            case '>':
                // If has a current playlist and haven't reached the end, "play" the current media
                // item by printing its information, and how much time in the playlist has elapsed
                // out of the total time. Advances the iterator. 
                if ( curPList != nullptr && it != curPList->end() ) {
                    mptr = *it; // get item to "play" by printing
                    ++it;       // advance iterator and elapsed time
                    mptr->print( std::cout );
                    std::cout  << " "<< it.getElapsedTime() << "/" 
                        << curPList->getTotalSeconds() << std::endl;
                } // if
                break;

            case 'z':
                // Resets the current playlist iterator to start over from the beginning.
                // Also resets the elapsed time to 0.
                if ( curPList != nullptr ) {
                    it = curPList->begin();
                    curPList->reset();
                } // if
                break;

            case 'f':
                // "f m <key>" looks for the item with the specified key in the media library.
                // "f p <idx>" sets the current playlist to the playlist at index <idx> and sets
                //    the play iterator to start at the beginning.
                std::cin >> arg;
                if ( arg == 'm' ) {
                    std::cin >> key;
                    mptr = media.find( key );
                    if ( mptr ) {
                        std::cout << "Found: ";
                        mptr->print( std::cout );
                        std::cout << std::endl;
                    } else {
                        std::cout << "Library doesn't contain any item with key " 
                            << key << std::endl;
                    } // if
                } else if ( arg == 'p' ) { // sets current playlist, for use with play iterator
                    std::cin >> index;
                    curPList = nullptr;
                    if ( index >= 0 && index < MAX_NUM_PLAYLISTS ) {
                        curPList = &plists[index];
                        it = curPList->begin();
                    } // if
                } // if
                break;

            case 'i':
                // "i <filename>" inserts the contents of file <filename> into the media library.
                // <filename> consists of a sequence of "a m" commands as described below.
                std::cin >> filename;
                getline( std::cin, line ); // throw away rest of line.
                {
                    try {
                        std::ifstream infile{ filename };
                        infile >> media;
                    } catch( std::exception & e ) {
                        std::cerr << e.what() << std::endl;
                    }
                }
                break;

            case 'a':
                // "a m t\n" is used to add a TV show to a media library. The information that
                // follows must follow the format as specified for the operator>> for a TV show.
                // "a m s\n" is used to add a song to a media library. The information that
                // follows must follow the format as specified for the operator>> for a song.
                // "a p <idx> <key>" add the media item with key <key> to the playlist at index <idx>.
                // Silently fails if <idx> not in range [0, MAX_NUM_PLAYLISTS-1] or media library
                // doesn't contain an item with key <key>.
                std::cin >> arg;
                if ( arg == 'm' ) {
                    std::cin >> dmtype;
                    getline( std::cin, line ); // throw away rest of line
                    if ( dmtype == 't' ) {
                        try {
                            std::cin >> t1;
                            media.add( new TV{t1} );
                        } catch( std::exception & e ) {
                            std::cerr << e.what() << std::endl;
                        }
                    } else if ( dmtype == 's' ) {
                        try {
                            std::cin >> s1;
                            media.add( new Song{s1} );
                        } catch( std::exception & e ) {
                            std::cerr << e.what() << std::endl;
                        }
                    } // if
                } else if ( arg == 'p' ) {
                    std::cin >> index >> key;
                    if ( index >= 0 && index < MAX_NUM_PLAYLISTS ) {
                        mptr = media.find( key );
                        if ( mptr ) plists[index].add( mptr );
                    } // if
                } // if
                break;
        } // switch
    } // while
} // main