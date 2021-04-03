#ifndef ENTRY_H
#define ENTRY_H

#include <string>

using std::string;


class Entry{
	public:
		Entry(){
			std::cout << "Constructor initiated.." << std::endl;
		}

	private:
		int id;
		string pushups;
		string pullups;
		string runTime;
};


#endif