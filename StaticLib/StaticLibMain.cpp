#include "Staticlib.h"

std::string Greeter::Greet(std::string& Name) 
{
	std::string greeting = "Здравствуйте," + Name + "!";
	std::cout << greeting << std::endl;
	return greeting;
}