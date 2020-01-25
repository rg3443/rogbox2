#ifndef CPERSON_H_INCLUDED
#define CPERSON_H_INCLUDED

#include <iostream>
#include <vector>
#include <string>
#include <stdio.h>
#include <ctime>
using namespace std;

#include "GWorld.h"
#include "CBackgrounds.h"

enum EPersonRoles_slot1 {
	LAWFULL = 1000,
	NEUTRALSLOT1 = 1001,
	CHAOTIC = 1002
};
enum EPersonRoles_slot2 {
	GOOD = 1000,
	NEUTRALSLOT2 = 1001,
	EVIL = 1002
};

class CPerson {
public:
	CPerson() {}
	void init(int id,string fname,string sname,int rolecode1,int rolecode2,CBackground * backcode) {
		person_id = id;
		first_name = fname;
		second_name = sname;
		person_role_code[0] = rolecode1;
		person_role_code[1] = rolecode2;
		background_code = backcode;
	}
	int get_id() { return person_id; }
	string get_fname() { return first_name; }
	string get_sname() { return second_name; }
	int get_rolecode(int slot_id) { return person_role_code[slot_id]; }
	CBackground* get_backcode() { return background_code; }
	
	
	
	// going to new base class
	void add_property(SProperty new_property) {
		propertys_owned.push_back(new_property);
	}
	void set_money(int money) { this->money = money; }
	int get_money() { return money; }
	int property_size() { return propertys_owned.size(); }
	//
	void set_current_location(int x,int y) { current_location[0] = x; current_location[1] = y; }
protected:
	int person_id;
	string first_name,second_name;
	int person_role_code[2];
	CBackground * background_code;
	
	//
	int money;
	vector<SProperty> propertys_owned;
	
	//
	int current_location[2];
	
};

#endif
