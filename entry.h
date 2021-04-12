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

	private:
		int id = 1;
		string pushups = "50";
		string pullups = "20";
		string runTime = "1030";
};


#endif