#include "Song.h"
#include "util.h"

Song::Song(const std::string & key, const std::string & title, int duration,
         const std::string & artist, const std::string & album, const std::string & genre ): DigitalMedia{key,title,duration}, artist{artist}, album{album}, genre{genre}
         {
             if (key.length() < 1) throw std::length_error{"key length < 1"};
             if (title.length() < 1) throw std::length_error{"title length < 1"};
             if (duration < 1) throw std::invalid_argument{"duration < 1"};
             if (artist.length() < 1) throw std::length_error{"artist length < 1"};
         }

Song::~Song(){}

const std::string & Song::getArtist() const{
    return artist;
}

const std::string & Song::getAlbum() const{
    return album;
}

const std::string & Song::getGenre() const{
    return genre;
}

void Song::print(std::ostream & out ){
    out << *this;
}

std::ostream & operator<<( std::ostream & out, const Song & s ){
    out << "(" << s.getKey() << ", " << "\"" << s.getTitle() << "\"";
    out << ", " << "\"" << s.getAlbum() << "\"";
    out << ", " << "\"" << s.getArtist() << "\"";
    out << ", " << s.getDuration() << ", " << "\"" << s.getGenre() << "\"" <<")";
    return out; 
}

std::istream & operator>>( std::istream & in, Song & s ){
    std::string key,title,artist,album,genre;
    int duration;
    getString(in, key, "invalid string");
    getString(in, title, "invalid string");
    getInteger(in, duration, "invalid int");
    getString(in, artist, "invalid string");
    getString(in, album, "invalid string");
    getString(in, genre, "invalid string");
    s = Song{key, title, duration, artist, album, genre};
    return in;
}

