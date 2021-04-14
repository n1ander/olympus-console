#include <iostream>
#include <string>
#include <fstream>
#include "entry.h"


void Entry::print(){
	std::cout << id << std::endl;
	std::cout << pushups << std::endl;
	std::cout << pullups << std::endl;
	std::cout << runTime << std::endl;
}

void Entry::createLog(){
	std::ofstream log("log.txt");
	log << "ID-----PUSHUPS-----PULLUPS-----RUN TIME";
	log.close();
}