#ifndef CVIEW_H_INCLUDED
#define CVIEW_H_INCLUDED

#include <iostream>
#include <stdio.h>
using namespace std;
#include "../model/CModel.h"
#include "CScreenSettings.h"
#include "SDL.h"


struct SGamePhaseInfo {
    int menuId;
    /*
    ** кнопки
    ** строки текста
    ** текстуры
    ** информация рода :
    ** позиция(x,y) , ширина, высота

    */
};

class CView {
public:
    CView() {}
    void Init(CModel* model);
    void ApplyNewScreenSettings(CScreenSettings * newSettings) { screenSettings = newSettings; }
    CScreenSettings* GetScreenSettings() { return screenSettings; }

    void DrawScene();

protected:
    CModel * model;
    CScreenSettings * screenSettings;
    CRenderer renderer;
};

#endif
