#include "rndsname.h"

void CRandomSNameGenerator::init()
{
	snameList.resize(SECONDNAMESIZE);
	snameList[0] = "Herer";
	snameList[1] = "Raspus";
	snameList[2] = "Stafford";
	snameList[3] = "Lukachoff";
	snameList[4] = "Bugachoff";
	snameList[5] = "Lihachoff";
	snameList[6] = "Mudachoff";
	snameList[7] = "Verner";
}

string CRandomSNameGenerator::get_sname()
{
	int randomvalue = rand() % SECONDNAMESIZE;
	return snameList[randomvalue];
}
