#include "CBackgroundsList.h"

void CBackgroundsList::Init()
{
	backgroundList.resize(3);
	backgroundList[0].set_name("Butcher");
	backgroundList[1].set_name("Jailbreaker");
	backgroundList[2].set_name("Crushed Lord");
}

CBackground* CBackgroundsList::get_background(string name) 
{
	for(int id=0;id<backgroundList.size();id++)
	{
		if(backgroundList[id].get_name() == name) return &backgroundList[id];
	}
}
