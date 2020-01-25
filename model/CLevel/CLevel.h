#ifndef CLEVEL_H_INCLUDED
#define CLEVEL_H_INCLUDED

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
#include "CMap/CMap.h"
#include "../CPlayer/CPlayer.h"
#include "../Creatures/CEnemy/CEnemy.h"
#include "../Creatures/CEnemy/CEnemy_list.h"

#include "../CWorld/GWorld.h"
#include "../CWorld/CWorld.h"

class CNPC;

//  CONTAIN CREATURES ON THE LEVEL
struct SCreatures_list {
    vector<CEnemy> enemy_list;
    vector<CNPC*> npc_list;
    void CreateEnemy(CEnemy* enemy_to_copy);
    void CreateNPC(CNPC* npc_to_copy);
};

class CLevel : public CBaseModelObject {
public:
    CLevel( ) {}
    CLevel( CLocation * new_current_location,CPlayer * player );
    void init(CPlayer * player);
	void fill_with_location(CLocation * location);


    void __console_tile_ground_show( );
    void __console_tile_object_show( );

    CMap* get_map() { return &map_field; }

    void CreateCreature(CEnemy* enemy_to_copy, cords pos);
    SCreatures_list* GetCreatureList() { return &creature_list; }
protected:
    CMap map_field;
    SCreatures_list creature_list;
    CPlayer * player;
    CEnemy_list eternal_enemy_list;
};

#endif // CLEVEL_H_INCLUDED
