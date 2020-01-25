#include "CPersonList.h"

void CPersonList::init(int person_ammount)
{
	random_name_generator.init();
	random_sname_generator.init();
	for(int perid=0;perid<person_ammount;perid++)
	{
		CPerson new_person;
		
		int person_id = perid;
		
		string person_fname = random_name_generator.get_name();
		
		string person_sname = random_sname_generator.get_sname();
		
		int rolecode[2] = { (rand() % 3 + 1000),(rand() % 3 + 1000) };
		
        CBackgroundsList backcodeList;
		backcodeList.Init(); 	
		int backcode_id = rand() % backcodeList.size();
        CBackground * background = backcodeList.get_background(backcode_id); 
		
		new_person.init(person_id,person_fname,person_sname,rolecode[0],rolecode[1],background);
		all_persons.push_back(new_person);
		
		cout << "STATUS: PERSON CREATED!\n";
		cout << "\tFNAME:" << person_fname << endl;
		cout << "\tSNAME:" << person_sname << endl;
		cout << "\tROLECODE:" << rolecode[0] << "|" << rolecode[1] << endl;
		cout << "\tBACKCODE:" << background->get_name() << endl;
	}
}
