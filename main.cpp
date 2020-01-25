#include <cstdlib>
#include <iostream>

#include <iostream>
#include <vector>
#include <string>
#include <stdio.h>
#include <ctime>
using namespace std;

#include "presenter/CPresenter.h"

int main(int argc, char *argv[])
{
    CPresenter program;
    program.Init();
    //program.Run();
    program.Quit();
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
