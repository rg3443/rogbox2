#include "CModel.h"

void CModel::Init()
{
	player.Init();
	worldData.Init();
	currentLocationRuler.init(&player);
}

void CModel::StartEtap()
{
	
}

void CModel::GameplayEtap()
{
	
}

void CModel::TravelEtap(int eWorldDirection)
{
	switch(eWorldDirection)
	{
	case NORTH:
		gameStatus.TravelNorth();
	break;
	case SOUTH:
		gameStatus.TravelSouth();
	break;
	case WEST:
		gameStatus.TravelWest();
	break;
	case EAST:
		gameStatus.TravelEast();
	break;
	}
}

void CModel::CheckInput()
{
	
}
