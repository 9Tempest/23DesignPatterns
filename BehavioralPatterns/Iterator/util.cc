#include "util.h"
#include <iostream>

void getString( std::istream & in, std::string & s, const char * fieldType ) {
    getline( in, s );
    if (in.fail()) throw std::runtime_error{fieldType};
    // *** If getline fails to obtain the necessary argument, raise
    // *** std::runtime_error initialized with the fiedlType parameter passed in.

} // getString

void getInteger( std::istream & in, int & i, const char * fieldType ) {
    std::string s;
    
    getline( in, s );
    std::runtime_error err{fieldType};
    if (in.fail()) throw std::runtime_error{fieldType};
    // *** If std::stoi fails, or getline fails to obtain the necessary argument, raise
    // *** std::runtime_error initialized with the fiedlType parameter passed in.

    if (!(i = std::stoi(s))) throw std::runtime_error{fieldType};
} // getInteger