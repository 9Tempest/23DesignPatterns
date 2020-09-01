#include "DigitalMedia.h"

DigitalMedia:: DigitalMedia( const std::string & key, const std::string & title, int duration ):
    key{key},title{title},duration{duration}{}

DigitalMedia:: ~DigitalMedia(){}
const std::string & DigitalMedia:: getKey() const{
    return key;
}
const std::string & DigitalMedia:: getTitle() const{
    return title;
}
int DigitalMedia:: getDuration() const{
    return duration;
}

    