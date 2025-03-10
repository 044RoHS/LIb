
#include "Staticlib.h"
#include <string>
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Ru");
	string Name;
	cout << "¬ведите им€: ";
	cin >> Name;

	Greeter gee;
	gee.Greet(Name);
	return 0;
	system("pause");
}