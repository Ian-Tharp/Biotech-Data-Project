#include <iostream>
#include <fstream>
#include "Data.h"

void PrintMenu()
{
    std::cout << "\tMAIN MENU" << std::endl;
    std::cout << "\t1 - Add Data" << std::endl;
    std::cout << "\t2 - Edit Data" << std::endl;
    std::cout << "\t3 - Delete Data" << std::endl;
    std::cout << "\t4 - View Data" << std::endl;
    std::cout << "\t0 - Quit" << std::endl;
    std::cout << std::endl;
    std::cout << "Choose an option: ";
}

int main()
{
    PrintMenu();
    return 0;
}
