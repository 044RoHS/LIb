#include "Dynamiclib.h"

int main() 
{
	setlocale(LC_ALL, "Ru");
	std::string Name;
	std::cout << "������� ���: ";
	std::cin >> Name;

	Leaver leavee;
	leavee.leave(Name);

	system("pause");
}