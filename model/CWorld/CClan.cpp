#include "CClan.h"

void CClan::init(int clan_id,int clan_type, string clan_name)
{
	this->clan_id = clan_id;
	this->clan_type = clan_type;
	this->clan_name = clan_name;
	
}

void CClan::consoleShowMembers()
{
	cout << "CLAN ID#" << clan_id << " MEMBERS LIST" << endl;
	for(int personId=0;personId<members.size();personId++)
	{
		int personGlobalId = members[personId]->get_id();
		string firstName = members[personId]->get_fname();
		string secondName = members[personId]->get_sname();
		cout << "\tMEMBER #" << personId << endl;
		cout << "\tNAME:" << firstName << "\n\tSNAME:" << secondName << "\n\tGLOBAL ID:" << personGlobalId << endl;
	}
}
