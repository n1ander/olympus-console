#ifndef ENTRY_H
#define ENTRY_H

#include <string>

using std::string;


class Entry{
	public:
		//constructor
		Entry(){
			std::cout << "Constructor initiated.." << std::endl;
		}
		//destructor
		~Entry(){
			std::cout << "Destructor initiated.." << std::endl;
		}
		void print();
		void createLog();
		void appendLog(int id, string pushups, string pullups, string runTime);
		void displayLog();
		int getID();

	private:
		int id = 0;
		string pushups = "";
		string pullups = "";
		string runTime = "";
};


#endif