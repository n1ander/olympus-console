#include <iostream>
#include <string>
#include "entry.h"

void Entry::print(){
	std::cout << id << std::endl;
	std::cout << pushups << std::endl;
	std::cout << pullups << std::endl;
	std::cout << runTime << std::endl;
}