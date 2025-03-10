#include "Dynamic.h"

std::string Leaver::leave(std::string& Name)
{
    std::string leav = "До свидания, " + Name + "!";
    std::cout << leav << std::endl;
    return leav; 
}