#ifndef CSCREENSETTINGS_H_INCLUDED
#define CSCREENSETTINGS_H_INCLUDED

#include <iostream>
#include <stdio.h>
using namespace std;
#include "../model/CModel.h"

class CScreenSettings {
public:
    CView() {}
    void Init(CModel* model);


protected:
    CModel * model;
    int screenW,screenH;
    float scalingMult;
};

#endif
