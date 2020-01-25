#ifndef CLOCATION_H_INCLUDED
#define CLOCATION_H_INCLUDED

#include <iostream>
#include <vector>
#include <string>
#include <stdio.h>
#include <ctime>
using namespace std;
#include "CPerson.h"
#include "../CLevel/CMap/CTile.h"
#include "GWorld.h"

class CLocation {
public:
	CLocation() {}
	void Init();
	
	void SetWH(int w,int h) { this->w=w; this->h=h; }
	void SetXY(int x,int y) { this->x=x; this->y=y; }
	void AddPerson(CPerson* newPerson) { persona.push_back(newPerson); }
	void ErasePerson(int personId);
	void ErasePerson(string personName);
    void SetLocationType(int locationType) { this->locationType = locationType;}
    
    int GetW() { return w; }
    int GetH() { return h; }
    int GetX() { return x; }
	int GetY() { return y; }
	int GetLocationType() { return locationType; }
	CTile* GetTile(int tileX, int tileY) { return &tileField[tileY][tileX]; }
    CPerson* GetPerson(int personId) { return persona[personId]; }
    
protected:
	int x,y,w,h,locationType;
	vector< vector<CTile> > tileField;
	vector<CPerson*> persona;
	
	SLocationStatus locationStatus;
};

#endif
