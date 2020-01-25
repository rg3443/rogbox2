#include "CWorld.h"

void CWorldEternalData::Init()
{
	const int CLAN_AMMOUNT = 2;
	const int PERSON_AMMOUNT = 10;
	const int LOCATION_SIZE = 80;
	locationMap.set_size(LOCATION_SIZE,LOCATION_SIZE);
	personList.init(PERSON_AMMOUNT);
	clanList.init(CLAN_AMMOUNT);
	
	int chance_to_enter = 100 / clanList.size();
	for(int person_id=0;person_id<personList.size();person_id++)
	{
		cout << "STARTING SEARCHING CLAN FOR PERSON WITH ID#" << person_id << endl;
		bool enter_done = false;
		int attemp_counter = 0;
		while(!enter_done)
		for(int clan_id=0;clan_id<clanList.size();clan_id++)
		{
			int randval = rand() % 100 + 1;
			if(randval < chance_to_enter)
			{
				CPerson * person = personList.get_person(person_id);
				CClan * clan = clanList.get_clan(clan_id);
				clan->add_member(person);
				enter_done = true;	
				cout << "STATUS: PERSON WITH ID" << person_id <<endl;
				cout << "\tENTERED A CLAN WITH ID" << clan_id << endl;
			} else {
				attemp_counter++;
				cout << "\tNOTHING HAPPEND!" << "ATTEMP #" << attemp_counter <<  endl;
				if(attemp_counter > 10) cout << "WTF????" << endl;
			}
			if(enter_done) break; // dont allow to enter two or more clans
		}
	}
	for(int i=0;i<clanList.size();i++)
	{
		clanList.get_clan(i)->consoleShowMembers();
	}
}

void CWorldEternalData::MadeTurn()
{
	
}


