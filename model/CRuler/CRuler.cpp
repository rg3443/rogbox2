#include "CRuler.h"

void CRuler::Init(CPlayer * player)
{
    this->player = player;
    enemytypesList.init();
}

void CRuler::InitLevel(CLocation * currentLocation)
{
    currentLevel->init(player); //KRASIVO
    this->currentLevel->fill_with_location(currentLocation);
}
// spawn -> play -> next_level
void CRuler::StartGameplayCycle()
{
	_spawn_etap();
	_play_etap();
	_nextlevel_etap();
}

void CRuler::_spawn_etap(int comedir)
{
    cords playerStartPosition;
    CMap* currentMap = currentLevel->get_map();
    switch(comedir)
    {
    case UP:
        playerStartPosition.x = currentMap->w_size() / 2;
        playerStartPosition.y = 3;
    break;
    case DOWN:
        playerStartPosition.x = currentMap->w_size() / 2;
        playerStartPosition.y = currentMap->h_size() - 3;
    break;
    case LEFT:
        playerStartPosition.x = 3;
        playerStartPosition.y = currentMap->h_size() / 2;
    break;
    case RIGHT:
        playerStartPosition.x = currentMap->w_size() - 3;
        playerStartPosition.y = currentMap->h_size() / 2;
    break;
    }
    player->set_coordiantes_on_current_level(playerStartPosition);

    for(int enemyId=0;enemyId<)

}

void CRuler::_play_etap()
{

}

void CRuler::_nextlevel_etap()
{

}
