#ifndef CMODEL_H_INCLUDED
#define CMODEL_H_INCLUDED

#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>
#include <sstream>
//#include <thread>
//#include <mutex>
using namespace std;
#include "CGlobalModel.h"
#include "CBaseModelObject.h"
#include "CLevel/CLevel.h"
#include "CRuler/CRuler.h"
#include "CPlayer/CPlayer.h"

enum EWorldDirections {
	NORTH,
	SOUTH,
	WEST,
	EAST
};

class CModel : public CBaseModelObject {
public:
    CModel() {}
    void Init(); // first init 
	void StartEtap(); // init all data
	void GameplayEtap(); // load level from worldData->location | check_all_objects+travel_status
	void TravelEtap(int eWorldDirection); // if travel status -> de-init current level -> create new level - > gameplayetap
	
	void CheckInput();
    void ConsoleShow();
protected:
    CWorldEternalData worldData;
    CRuler currentLocationRuler;
    CPlayer player;
	
	SCurrentPlayData gameStatus;
};

#endif // CMODEL_H_INCLUDED
