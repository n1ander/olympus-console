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
	int userInput;
	cout << "Please select one of the following.\n(1) View Log (2) Append (3) Exit\nSelection: ";
	cin >> userInput;
	switch(userInput){
		case 1:
			cout << "You entered 1.\n";
			break;
		case 2:
			cout << "You entered 2.\n";
			break;
		case 3:
			cout << "Exiting Application...\n";
			return 0;
			break;
		default:
			cout << "You entered an incorrect value.\n";
			break;
	}
	/*if(userInput == 'y'){
		int id;
		string pushups;
		string pullups;
		string runTime;
		id = e.getID();
		cout << "Enter pushups: ";
		cin >> pushups;
		cout << "Enter pullups: ";
		cin >> pullups;
		cout << "Enter mile time: ";
		cin >> runTime;
		e.appendLog(id, pushups, pullups, runTime);
	} else {
		return 0;
	}*/
	return 0;
}