#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[])
{
	char ascii[10] = {'0', '1', '2', '3', '4', 
			  '5', '6', '7', '8', '9'};	//�ŧi�ð_�l�r���}�C
	cout << "�r��\tASCII�X\n";	//��X���Y
	cout << "----\t-------\n";	//��X���Y
	for (int count = 0; count <= 9; count++)	//for count = 0 to 9
	{
		cout << setw(3) << ascii[count] << '\t';	//��X�Ʀr
		cout << setw(5) << int(ascii[count]);	//��X������ASCII�X
		cout << endl;
	}
	system("PAUSE");
	return EXIT_SUCCESS;
}
