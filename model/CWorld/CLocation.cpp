#include "CLocation.h"

void CLocation::Init()
{
	tileField.resize(100);
    for(int iy=0;iy<tileField.size();iy++)
    {
		tileField[iy].resize(100);
        for(int ix=0;ix<tileField[iy].size();ix++)
        {
            tileField[iy][ix].init(STONE,NOTHING);
        }
    }	
}
