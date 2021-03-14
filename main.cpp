#include <iostream>
#include <fstream>
#include "RetrievedData.h"

void PrintMenu()
{
    std::cout << "\t1 - Add Data" << std::endl;
    std::cout << "\t2 - Edit Data" << std::endl;
    std::cout << "\t3 - Delete Data" << std::endl;
    std::cout << "\t4 - View Data" << std::endl;
    std::cout << "\t0 - Quit" << std::endl;
}

int main()
{
    std::cout << "\t\tWelcome!" << std::endl;
    PrintMenu();
    return 0;
}
