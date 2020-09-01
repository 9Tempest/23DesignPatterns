#ifndef _SONG_
#define _SONG_
#include "DigitalMedia.h"

class Song: public DigitalMedia {
    std::string artist;
    std::string album;
    std::string genre;

public:
    // Sets key, title, duration, artist, album, and genre information.
    // Raises: std::length_error if key.length() < 1 or title.length() < 1
    //         std::invalid_argument if duration < 1 
    //         std::length_error if artist.length() < 1
    // (checks are made in order listed)
    Song( const std::string & key, const std::string & title, int duration,
         const std::string & artist, const std::string & album, const std::string & genre );
    virtual ~Song();
    virtual void print( std::ostream & out ) override;

    const std::string & getArtist() const;
    const std::string & getAlbum() const;
    const std::string & getGenre() const;
};

// Returns modified output stream. Outputs (key, "title", "album", "artist", duration, "genre").
// (Explicitly surrounds strings that might have whitespace within with double-quotation marks.)
std::ostream & operator<<( std::ostream & out, const Song & s );

// Returns modified input stream. Contents of s over-written with information read in, where
// format is "key\ntitle\nduration\nartist\nalbum\ngenre\n". 
// Raises std::runtime_error if fails to obtain any of the elements, if any of the strings
// except for genre or album are empty, or if duration cannot be successfully converted to an int.
std::istream & operator>>( std::istream & in, Song & s );

#endif
