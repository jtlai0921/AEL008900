#include <cstdlib>
#include <iostream>
using namespace std;
const int MAX = 5;	//MAX = �}�C�̤j�d��

int main(int argc, char *argv[])
{
	int counti, countj, minimum, mindex;	//�ŧi����ܼ�
	int number[MAX] = {57, 19, 33, 92, 6};	//�ŧi�@���}�C
	cout << "�Ƨǫe�G";	//��ܱƧǫe���
	for (counti = 0; counti < MAX; counti++)
		cout << number[counti] << '\0';
	for (counti = 0; counti < MAX-1; counti++)	//�Ƨǥ~�j��
	{
		mindex = counti;	//mindex=�̤p�ȯ���
		minimum = number[counti];	//minimum=�̤p��
		for (countj = counti+1; countj < MAX; countj++)	//�ƧǤ��j��
		{
			if (number[countj] < minimum)         //�Ynumber[countj]<�̤p��
			{
				minimum = number[countj];	//minimum=�s�̤p��
				mindex = countj;	//mindex=�s�̤p�ȯ���
			}
		}
		number[mindex] = number[counti];         //number[�̤p�ȯ���]=���j��
		number[counti] = minimum;                 //number[counti]=�̤p��
	}
	cout << "\n�Ƨǫ�G";	//��ܱƧǫ���
	for (counti = 0; counti < MAX; counti++)
		cout << number[counti] << '\0';
	cout << endl;
	system("PAUSE");
	return EXIT_SUCCESS;
}
