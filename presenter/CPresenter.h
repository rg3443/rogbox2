#ifndef CPRESENTER_H_INCLUDED
#define CPRESENTER_H_INCLUDED


#include <iostream>
#include <vector>
#include <string>
#include <stdio.h>
#include <ctime>
using namespace std; 
#include "../model/CWorld/CWorld.h"
#include "../model/CRuler/CRuler.h"
#include "../model/CModel.h"

class CPresenter {
public:
    CPresenter() {}
    void Init();
	void Run();
	void Quit();
protected:
    CModel model;
	//CView view;
	bool quit;
	
};

#endif // CPRESENTER_H_INCLUDED
