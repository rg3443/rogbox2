#ifndef CRULER_H_INCLUDED
#define CRULER_H_INCLUDED

#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>
#include <sstream>
//#include <thread>
//#include <mutex>
using namespace std;
#include "../CGlobalModel.h"
#include "../CBaseModelObject.h"
#include "../CLevel/CLevel.h"
#include "../CPlayer/CPlayer.h"
#include "../Creatures/CEnemy/CEnemy_list.h"

class CRuler : public CBaseModelObject {
public:
    CRuler() { }
    void Init(CPlayer * player);
    void InitLevel( CLocation * currentLocation );
    void StartGameplayCycle();

    //  GAME CYCLE
    void _spawn_etap();
    void _play_etap();
    void _nextlevel_etap();
    //

protected:
    CLevel * currentLevel;
	CPlayer * player;
	CEnemy_list enemytypesList;

};

#endif // CRULER_H_INCLUDED
