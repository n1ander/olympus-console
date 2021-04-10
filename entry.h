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

	private:
		int id;
		string pushups;
		string pullups;
		string runTime;
};


#endif