#include "CEnemy.h"

void CEnemy::init(string name, int type, SStats stats,int global_id)
{
    this->stats = stats;
    this->global_id = global_id;
}

void CEnemy::init_all_enemy_types()
{

}

void CEnemy::init_like_template(string name, int type, SStats stats)
{

}
