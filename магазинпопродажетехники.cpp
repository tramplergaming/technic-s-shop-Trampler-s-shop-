#include <iostream>
#include <iomanip>
#include <string>
#include <limits>
//�������� � ������ �����
/* 
������� �� ������� ����������� "Trampler's shop"
1. ������ ��
2. ����������
3. ������� ����
4. ������� ���������
5. ��������
6. �������
7. ������������� ��� ��
8. ��������
9. �������
10. ��������
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

	std::cout << "\n\t\t\t����� ���������� � Trampler's shop!\n\n";

	std::cout << "������� �����: ";

	std::getline(std::cin, login);

	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

	std::cout << "������� ������: ";


	std::getline(std::cin, password);

	std::cin.ignore();
}