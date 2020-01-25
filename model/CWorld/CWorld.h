#ifndef CWORLD_H_INCLUDED
#define CWORLD_H_INCLUDED

#include <iostream>
#include <vector>
#include <string>
#include <stdio.h>
#include <ctime>
using namespace std;

#include "CLocation.h"
#include "CPerson.h"
#include "CClan.h"
#include "CClanList.h"
#include "CPersonList.h"
#include "GWorld.h"


struct SLocationMap {
	vector< vector<CLocation> > locations;
	void set_size(int w,int h)
	{
		locations.resize(h);
		for(int i=0;i<locations.size();i++)
		{
			locations[i].resize(w);
		}
	}
	CLocation* GetLocation(int x, int y)
	{
		return &locations[y][x];
	}

};

class CWorldEternalData {
public:
	CWorldEternalData() {}
	void Init();
	void MadeTurn();
protected:
	SLocationMap locationMap;
	CPersonList personList;
	CClanList clanList;
};

#endif
