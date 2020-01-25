#ifndef CPERSONLIST_H_INCLUDED
#define CPERSONLIST_H_INCLUDED

#include <iostream>
#include <vector>
#include <string>
#include <stdio.h>
#include <ctime>
using namespace std;

#include "../../Sup/rndptk/rndname.h"
#include "../../Sup/rndptk/rndsname.h"
#include "../../Sup/rndptk/rndptk.h"
#include "CPerson.h"
#include "CBackgroundsList.h"

class CPersonList {
public:
	CPersonList() {}
	void init(int person_ammount);
	CPerson* get_person(int person_id) { return &all_persons[person_id]; }
	int size() { return all_persons.size(); }
protected:
	vector<CPerson> all_persons;
	CRandomNameGenerator random_name_generator;
	CRandomSNameGenerator random_sname_generator;
	//Potok random_role_generator,random_back_generator;
};

#endif
