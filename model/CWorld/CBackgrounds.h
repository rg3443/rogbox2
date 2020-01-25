#ifndef CBACKGROUNDS_H_INCLUDED
#define CBACKGROUNDS_H_INCLUDED

#include <iostream>
#include <vector>
#include <string>
#include <stdio.h>
#include <ctime>
using namespace std;

class CBackground {
public:
	CBackground() {}
	CBackground(string name) { this->set_name(name); }
	void set_name(string name) { this->name = name; }
	void add_bonuscode(int bonuscode) { bonuscodeList.push_back(bonuscode); }
	string get_name() { return name; }
	vector<int> get_bonuscode_list() { return bonuscodeList; }
	friend std::ostream& operator<< (std::ostream &out, const CBackground &backgra);
protected:
	string name;
	vector<int> bonuscodeList;
};

#endif
