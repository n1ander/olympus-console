#include <iostream>
#include <string>
#include <fstream>
#include "entry.h"

using std::cout;
using std::cin;
using std::ifstream;

int main(){
	Entry e;
	ifstream ifile;
	ifile.open("log.txt");
	if(ifile){
		cout << "A log file exists...\n";
	} else {
		cout << "A log file does not exist...\n";
		e.createLog();
	}
	int id;
	string pushups;
	string pullups;
	string runTime;
	cout << "Enter ID: ";
	cin >> id;
	cout << "Enter pushups: ";
	cin >> pushups;
	cout << "Enter pullups: ";
	cin >> pullups;
	cout << "Enter mile time: ";
	cin >> runTime;
	e.appendLog(id, pushups, pullups, runTime);
	return 0;
}