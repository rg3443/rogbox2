#include "CEnemy_list.h"

void CEnemy_list::init()
{
    enemy_list.resize(1);
        enemy_list[0].init_like_template("WOLF",FORESTWOLF,SStats(50.f,20.f,25.f));

}
