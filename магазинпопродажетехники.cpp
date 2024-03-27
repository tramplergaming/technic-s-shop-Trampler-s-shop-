#include <iostream>
#include <iomanip>
#include <string>
#include <limits>
//название и товары внизу
/* 
Магазин по продаже электроники "Trampler's shop"
1. сборки пк
2. аксессуары
3. бытовые вещи
4. игровые приставки
5. наушники
6. корпуса
7. комплектующие для пк
8. мониторы
9. колонки
10. телефоны
*/

void Start();

int main()
{
	setlocale(LC_ALL, "ru");

	Start();
	system("pause");
	return 0;
}

void Start()
{
	std::string adminLogin = "medelyan";
	std::string adminPassword = "antkeytothe42";
	std::string login, password;

	std::cout << "\n\t\t\tДобро пожаловать в Trampler's shop!\n\n";

	std::cout << "Введите логин: ";

	std::getline(std::cin, login);

	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

	std::cout << "Введите пароль: ";


	std::getline(std::cin, password);

	std::cin.ignore();
}