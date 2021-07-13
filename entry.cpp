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

void Entry::appendLog(int id, string pushups, string pullups, string runTime){
	std::ofstream log;
	log.open("log.txt", std::ios_base::app);
	log << id << "," << pushups << "," << pullups << "," << runTime << std::endl;
	std::cout << "Appended values: " << id << "," <<  pushups << "," << pullups << "," << runTime << std::endl;
}

void Entry::deleteLog(string filename){
	std::cout << "Are you sure you would like to delete " << filename << "?\nSelection: ";
	char confirm;
	std::cin >> confirm;
	if(confirm == 'y'){
		std::cout << "File is going to be deleted.\n";
		if(remove("log.txt") != 0);
	} else {
		std::cout << "File will not be deleted.";
	}
}

void Entry::displayLog(string filename){
	std::cout << "Show all log entries..." << std::endl;
}

int Entry::getID(){
	id++;
	return id;
}