#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	const int max = 5;	//�ŧi��`�ƲŸ�
	int counti, countj, buffer;	//�ŧi����ܼ�
	int number[max] = {57, 19, 33, 92, 6};	//�ŧi�@���}�C
	cout << "�Ƨǫe�G";	//��ܱƧǫe���
	for (counti = 0; counti < max; counti++)
		cout << number[counti] << '\0';
	for (counti = 0; counti < max-1; counti++)	//�Ƨǥ~�j��
		for (countj = counti; countj < max; countj++)	//�ƧǤ��j��
			if (number[counti] > number[countj])	//�Y���n�h���
			{
				buffer = number[counti];
				number[counti] = number[countj];
				number[countj] = buffer;
			}
	cout << "\n�Ƨǫ�G";	//��ܱƧǫ���
	for (counti = 0; counti < max; counti++)
		cout << number[counti] << '\0';
	cout << endl;
	system("PAUSE");
	return EXIT_SUCCESS;
}
