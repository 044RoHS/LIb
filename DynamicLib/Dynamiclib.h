#pragma once
#include <iostream>
#include <string>

#ifdef DYNAMICLIB_EXPORTS
#define exp __declspec(dllexport)
#else 
#define exp __declspec(dllimport)
#endif

class Leaver 
{
public:
	exp std::string leave(std::string& Name);
};