#include "rndname.h"

void CRandomNameGenerator::init()
{
	nameList.resize(NAMESIZE);
	nameList[0] = "Jack";
	nameList[1] = "Harold";
	nameList[2] = "Henry";
	nameList[3] = "Stefan";
	nameList[4] = "Herald";
	nameList[5] = "Joseph";
}

string CRandomNameGenerator::get_name()
{
	int randnum = rand() % NAMESIZE;
	return nameList[randnum];
}
