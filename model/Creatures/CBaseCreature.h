#ifndef CBASECREATURE_H_INCLUDED
#define CBASECREATURE_H_INCLUDED

#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>
#include <sstream>
//#include <thread>
//#include <mutex>
using namespace std;
#include "../../pcgGlobal.h"
#include "../CGlobalModel.h"

class CBaseCreature : public CBaseInGameObject {
public:
    CBaseCreature() {}
    void set_stats(SStats stats) { this->stats = stats; }
    SStats get_stats() { return stats; }
protected:
    SStats stats;
};

#endif // CBASECREATURE_H_INCLUDED
