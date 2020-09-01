#ifndef _UTIL_
#define _UTIL_

#include <stdexcept>
#include <iostream>
#include <string>

// Attempts to read in a string until newline is reached. If fails to obtain
// a string, raises std::runtime_error{fieldType}.
void getString( std::istream & in, std::string & s, const char * fieldType );

// Attempts to read in an integer from input stream in. If fails to obtain an integer,
// or value cannot be converted to an integer, raises std::runtime_error{fieldType}.
void getInteger( std::istream & in, int & i, const char * fieldType );

#endif
