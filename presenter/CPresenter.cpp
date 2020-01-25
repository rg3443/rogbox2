#include "CPresenter.h"

void CPresenter::Init()
{
    model.Init();
	//view.Init(&model);
}

void CPresenter::Run()
{
	quit = false;
	while(!quit)
	{
		model.CheckInput();
		//view.DrawModel();
	}
}

void CPresenter::Quit()
{
	
}
