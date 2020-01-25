#ifndef CBACKGROUNDSLIST_H_INCLUDED
#define CBACKGROUNDSLIST_H_INCLUDED

#include <iostream>
#include <vector>
#include <string>
#include <stdio.h>
#include <ctime>
using namespace std; 

#include "CBackgrounds.h"

class CBackgroundsList {
public:
	CBackgroundsList() {}
	void Init();
	void add_background(CBackground new_background) { backgroundList.push_back(new_background); }
	CBackground* get_background(string name);
	CBackground* get_background(int backId) { return &backgroundList[backId]; }
	int size() { return backgroundList.size(); }
	
protected:
	vector<CBackground> backgroundList;
};

#endif
