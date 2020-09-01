#ifndef _PLAYLIST_ITERATOR_
#define _PLAYLIST_ITERATOR_

#include <string>
#include <vector>
class Playlist; // forward declarations
class DigitalMedia;

class PlaylistIterator {
    friend class Playlist;
    int totalSeconds;
    int secondsPlayedSoFar;
    std::vector<DigitalMedia*>::iterator currit;

    explicit PlaylistIterator(std::vector<DigitalMedia*>::iterator,int,int);

public:
    int getElapsedTime() const;   
    // Caller "plays" the item by printing its information to std::cout.
    DigitalMedia * operator*();

    // Adds the duration of the item just played to the total time elapsed so far before moving
    // the iterator.
    PlaylistIterator operator++();

    bool operator==(const PlaylistIterator &other) const;
    bool operator!=(const PlaylistIterator &other) const; 
};

#endif
