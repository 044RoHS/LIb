#include "Staticlib.h"

std::string Greeter::Greet(std::string& Name) 
{
	std::string greeting = "������������," + Name + "!";
	std::cout << greeting << std::endl;
	return greeting;
}