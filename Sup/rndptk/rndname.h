#ifndef RNDNAME_H_INCLUDED
#define RNDNAME_H_INCLUDED

#include <iostream>
#include <vector>
#include <string>
#include <stdio.h>
#include <ctime>
using namespace std;

class CRandomNameGenerator {
public:
	CRandomNameGenerator() { NAMESIZE = 6; }
	void init();
	string get_name();
	int size() { return NAMESIZE; }
protected:
	vector<string> nameList;
	int NAMESIZE; // constant
};

#endif
