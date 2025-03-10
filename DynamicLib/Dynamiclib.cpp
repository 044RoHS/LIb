#include "Dynamiclib.h"

std::string Leaver::leave(std::string& Name) 
{
	std::string leavve = "До свидания, " + Name + "!";
	std::cout << leavve << std::endl;
	return leavve;
}