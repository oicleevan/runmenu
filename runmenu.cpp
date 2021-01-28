#include <iostream>
#include <cstdlib>
#include "colormod.h"

using std::cout;
using std::cin;
using std::string;

int main()
{
    string input;
 
    Color::Modifier blue(Color::BG_DARKBLUE);
    Color::Modifier def(Color::BG_DEFAULT);
    cout << blue << " Run: " << def << " ";
    cin >> input;

    string program = "nohup ";
    program.append(input);

    system(program.c_str());
    system("rm ./nohup.out");
}
