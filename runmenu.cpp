#include <iostream>
#include <string>
#include <cstdlib>

#include "colormod.h"

using namespace std;
using Color::Modifier;


int main()
{
    string input;
    
    Modifier blue(Color::BG_DARKBLUE);
    Modifier def(Color::BG_DEFAULT);
    
    CALL:
    cout << blue << " Run: " << def << " ";
    getline(cin, input);

    if(input == "" | input == " ")
    {
        system("echo there is nothing to do");
        system("sleep 3");
        system("clear");
        
        goto CALL;
    } else {
        string program = "nohup " + input + " &";

        system(program.c_str());
        system("exit");
        system("rm ./nohup.out");
    }
}

    
