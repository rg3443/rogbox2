#ifndef CVIEW_H_INCLUDED
#define CVIEW_H_INCLUDED

#include <iostream>
#include <stdio.h>
using namespace std;
#include "../model/CModel.h"

class CView {
public:
    CView() {}
    void Init(CModel* model);


protected:
    CModel * model;

};

#endif
