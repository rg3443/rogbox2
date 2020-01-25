#ifndef CPLAYER_H_INCLUDED
#define CPLAYER_H_INCLUDED

#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>
#include <sstream>
//#include <thread>
//#include <mutex>
using namespace std;
#include "../../Sup/QABsys/trueQAB.h"
#include "../CBaseModelObject.h"
#include "../Creatures/CBaseCreature.h"

class CPlayer : public CBaseCreature {
public:
    CPlayer() {}
    void Init( ) {}
protected:

};

#endif // CPLAYER_H_INCLUDED
