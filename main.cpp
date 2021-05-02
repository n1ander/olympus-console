#include <iostream>
#include <string>
#include <fstream>
#include "entry.h"

using std::cout;
using std::ifstream;

int main(){
	Entry e;
	e.print();
	ifstream ifile;
	ifile.open("log.txt");
	if(ifile){
		cout << "A log file exists...\n";
	} else {
		cout << "A log file does not exist...\n";
		e.createLog();
	}
	e.appendLog(1, "50", "20", "1030");
	return 0;
}