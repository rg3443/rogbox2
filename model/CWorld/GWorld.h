#ifndef GWORLD_H_INCLUDED
#define GWORLD_H_INCLUDED

#include <iostream>
#include <vector>
#include <string>
#include <stdio.h>
#include <ctime>
using namespace std;

//#include "../../pcgGlobal.h"

struct corda {
    int x,y;
    corda() {}
    corda(int nx,int ny) {
        x = nx;
        y = ny;
    }
};

struct SBasicPersonData {
	int person_id;
	string first_name,second_name;
};

struct STituls {
	SBasicPersonData leader,righthand,pretender;
	void add_leader(SBasicPersonData lead) { leader = lead; }
	void add_righthand(SBasicPersonData rhand) { righthand = rhand; }
	void add_pretender(SBasicPersonData pret) { pretender = pret; }
};

struct SPolitics {
	vector<int> enemy_list;
	vector<int> ally_list;
	vector<int> vassal_list;
	void add_ally(int id)
	{
		ally_list.push_back(id);
	}
	void add_enemy(int id)
	{
		enemy_list.push_back(id);
    }
	void add_vassal(int id)
	{
		vassal_list.push_back(id);
	}
};

struct SProperty {
	corda location_pos;
	vector<corda> tiles_in_property;
};

struct SLocalDisaster {
	float starvingChance,massiveStealChance,massiveFireChance;
	SLocalDisaster() {}
	SLocalDisaster(float starving,float stealing,float firing) {
		starvingChance = starving;
		massiveStealChance = stealing;
		massiveFireChance = firing;
	}
};

struct SLocationStatus {
	// chances of calling locationevent in next generate
	SLocalDisaster chances;
	bool starvingEvent,massiveStealEvent,massiveFireEvent;
	void addVeighs(SLocalDisaster veigs) {
		
	}
};

#endif
