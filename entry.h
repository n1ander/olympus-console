#ifndef ENTRY_H
#define ENTRY_H

#include <string>

using std::string;


class Entry{
	public:
		Entry(string entry);

	private:
		string entry = "This is an entry!";
};


#endif