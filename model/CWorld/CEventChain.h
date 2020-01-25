#ifndef CEVENTCHAIN_H_INCLUDED
#define CEVENTCHAIN_H_INCLUDED

#include <iostream>
#include <vector>
#include <string>
#include <stdio.h>
#include <ctime>
using namespace std;
#include "GWorld.h"

class CEventChain {
public:
	CEventChain() {}
	void Create(string name);
	void AddMember(CPerson* newMember);
	void AddExit(SGlobalShit exitVeighs);
protected:
	vector<CPerson*> members;
	string name;
	vector<SGlobalShit> shitChancesVeigh;
	
	SLocationStatus * currentLocationEvent;
};

#endif