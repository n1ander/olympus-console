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
	cout << "Please select one of the following.\n(1) View Log (2) Append (3) Delete Log (4) Exit\nSelection: ";
	cin >> userInput;
	switch(userInput){
		case 1:
			e.displayLog();
			break;
		case 2:

			break;
		case 3:
			e.deleteLog("log.txt");
			break;
		case 4: 
			cout << "Exiting Application...\n";
			return 0;
		default:
			cout << "You entered an incorrect value.\n";
			break;
	}
	return 0;
}