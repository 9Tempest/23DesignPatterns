#ifndef _TV_
#define _TV_

#include "DigitalMedia.h"

class TV: public DigitalMedia {
    int episode;
    int season;
    std::string series;

public:
    // Sets key, title, duration, episode, season, and series information.
    // Raises: std::length_error if key.length() < 1 or title.length() < 1
    //         std::invalid_argument if duration < 1 
    //         std::length_error if series.length() < 1
    //         std::invalid_argument if episode < 1 or season < 1 
    // (checks are made in order listed)
    TV( const std::string & key, const std::string & title, int duration,
         int episode, int season, const std::string & series );
    virtual ~TV();
    virtual void print( std::ostream & out ) override;

    int getEpisode() const;
    int getSeason() const;
    const std::string & getSeries() const;
};

// Returns modified output stream. Outputs (key, "series" S<season>E<episode> "title", duration).
// (Explicitly surrounds strings that might have whitespace within with double-quotation marks.
// Season number and episode number have a default width of 2, and must start with '0' if < 10.)
std::ostream & operator<<( std::ostream & out, const TV & t );

// Returns modified input stream. Contents of t over-written with information read in, where
// format is "key\ntitle\nduration\nseason\nepisode\nseries\n". 
// Raises std::runtime_error if fails to obtain any of the elements, the strings are empty,
// or if duration, season, or episode cannot be successfully converted to an int.
std::istream & operator>>( std::istream & in, TV & t );

#endif
