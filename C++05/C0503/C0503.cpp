#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	unsigned int year;
	do
	{
		cout << "�п�J��ơA�Y��J 0 �h�����G";
		cin >> year;	//Ū����L��J
	} while (year != 0);	//�Y��J���O0�h�j���~��
    system("PAUSE");
    return EXIT_SUCCESS;
}
