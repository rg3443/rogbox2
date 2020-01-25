#ifndef CENEMY_H_INCLUDED
#define CENEMY_H_INCLUDED


#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>
#include <sstream>
//#include <thread>
//#include <mutex>
using namespace std;
#include "../../../pcgGlobal.h"
#include "../../CBaseModelObject.h"
#include "../CBaseCreature.h"

class CEnemy : public CBaseCreature {
public:
    CEnemy() {}
    void init(string name, int type, SStats stats,int global_id); // init in map\level
    void init_like_template(string name, int type, SStats stats); // init in enemy_list
    void init_all_enemy_types();
protected:
    string name;
    int type;
};

#endif // CENEMY_H_INCLUDED
