/*
Created by: Shelby Jorgensen
Project 3: URL Parser
Created for CSCI 151
*/

#include "main.h"
#include <string>
#include <iostream>

int main() {
	// Take in the user URL, and store it to a variable
	std::cout << "Please enter a URL: ";
	std::cin >> userURL;

	// Using the user URL, break it into the different sections
	
	// 1 is added to give the index including the :
	schemeEnd = userURL.find(":") + 1;
	// 2 is added to give the index including the //
	brokenURL = userURL.substr(schemeEnd + 2, userURL.size());
	scheme = userURL.substr(0, schemeEnd);
	authorityStart = userURL.find("//");
	authorityEnd = brokenURL.find("/") + 2;
	authority = userURL.substr(authorityStart, authorityEnd);
	// By adding the authority end index, as well as the scheme end index, we can get the path after these parts
	path = userURL.substr((authorityEnd + schemeEnd), userURL.size());

	// Print the URL in it's seperate parts
	std::cout << "The initial URL was: " + userURL + "\n";
	std::cout << "The scheme of this URL is: " + scheme + "\n";
	std::cout << "The authority of this URL is: " + authority + "\n";
	std::cout << "The path of this URL is: " + path + "\n";
}