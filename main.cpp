# include "Dynamic.h"

int main()
{
    std::string Name;
    std::cout << "Введите имя: ";
    std::cin >> Name;

    Leaver leavee;
    leavee.leave(Name);
    return 0;
    system("pause");
    
}