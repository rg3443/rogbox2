#include "CLevel.h"

CLevel::CLevel( CLocation * new_current_location,CPlayer * player )
{
    this->init(player);
    for(int y=0;y<new_current_location->GetH();y++)
    {
        for(int x=0;x<new_current_location->GetW();x++)
        {
                    
        }        
    }
}

void CLevel::init( CPlayer * player )
{
    map_field.init(DEFFAULT,100,100);
    eternal_enemy_list.init();
    creature_list.CreateEnemy(eternal_enemy_list.get_enemy_by_id(0));
    creature_list.enemy_list[0].set_coordiantes_on_current_level(cords(0,2));
    this->player = player;
}

void CLevel::fill_with_location(CLocation * location)
{
	// copy location data to this->level data
	map_field.fill_with_location( location );
}

void CLevel::__console_tile_ground_show()
{
    cout << "TILEGROUND DATA :\n\n";
    for(int y=0;y<map_field.h_size();y++)
    {
        for(int x=0;x<map_field.w_size();x++)
        {
            CTile * tile = map_field.get_tile(x,y);
            switch(tile->get_ground_type())
            {
            case EARTH:
                cout << "E";
            break;
            case STONE:
                cout << "S";
            break;
            case WOOD:
                cout << "W";
            break;
            }
        }
        cout << endl;
    }
    cout << "ENEMYDATA :\n\n";
    for(int y=0;y<map_field.h_size();y++)
    {
        for(int x=0;x<map_field.w_size();x++)
        {
            bool crt_here = false;
            for(int i=0;i<creature_list.enemy_list.size();i++)
            {
                int ex = creature_list.enemy_list[i].get_x();
                int ey = creature_list.enemy_list[i].get_y();
                if(ex == x && ey == y)
                {
                    crt_here = true;
                }
            }
            if(crt_here) cout << "X";
            else cout << "O";
        }
        cout << endl;
    }
}

void SCreatures_list::CreateEnemy(CEnemy* enemy_to_copy)
{
    addtovector(&enemy_list,enemy_to_copy);
}

