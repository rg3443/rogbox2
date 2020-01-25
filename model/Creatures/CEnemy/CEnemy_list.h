#ifndef CENEMY_LIST_H_INCLUDED
#define CENEMY_LIST_H_INCLUDED

#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>
#include <sstream>
//#include <thread>
//#include <mutex>
using namespace std;
#include "../../CGlobalModel.h"
#include "../../CBaseModelObject.h"
#include "CEnemy.h"

class CEnemy_list : public CBaseModelObject {
public:
    CEnemy_list() {}
    void init();

    CEnemy* get_enemy_by_id(int id) { return &enemy_list[id]; }
    int size() { return enemy_list.size(); }
protected:
    vector<CEnemy> enemy_list;
};

#endif // CENEMY_LIST_H_INCLUDED
