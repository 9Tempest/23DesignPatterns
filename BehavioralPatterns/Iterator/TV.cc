#include "TV.h"
#include "util.h"

TV::TV( const std::string & key, const std::string & title, int duration,
         int episode, int season, const std::string & series )
         : DigitalMedia(key,title,duration), episode{episode},season{season},series{series}{
             if (key.length() < 1) throw std::length_error{"key length < 1"};
             if (title.length() < 1) throw std::length_error{"title length < 1"};
             if (duration < 1) throw std::invalid_argument{"duration < 1"};
             if (series.length() < 1) throw std::length_error{"series length < 1"};
             if (episode < 1) throw std::invalid_argument{"episode length < 1"};
             if (season < 1) throw std::invalid_argument{"season length < 1"};
         }

TV::~TV(){}

int TV::getEpisode() const{
    return episode;
}

int TV::getSeason() const{
    return season;
}

const std::string & TV::getSeries() const{
    return series;
}

void TV::print(std::ostream & out ){
    out << *this;
}

std::ostream & operator<<( std::ostream & out, const TV & t ){
    out << "(" << t.getKey() << ", " << "\"" << t.getSeries() << "\"";
    out << " " << "S" << std::setfill('0') << std::setw(2)<< t.getSeason() << "E" <<std::setfill('0') << std::setw(2)<< t.getEpisode();
    out << " " << "\"" << t.getTitle() << "\"";
    out << ", " << t.getDuration() << ")";
    return out; 
}

std::istream & operator>> (std::istream & in, TV &t){
    std::string key,title,series;
    int duration,episode,season;
    getString(in, key, "invalid string");
    getString(in, title, "invalid string");
    getInteger(in, duration, "invalid int");
    
    getInteger(in, episode, "invalid int");
    getInteger(in, season, "invalid int");
    getString(in, series, "invalid string");
    t = TV(key, title, duration, season, episode, series);
    return in;
}
