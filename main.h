#include <string>

// Variable to hold user URL
std::string userURL;

// Variables to hold different parts of the user URL
std::string scheme;
int schemeEnd;
std::string authority;
int authorityStart;
int authorityEnd;
std::string path;

std::string brokenURL;