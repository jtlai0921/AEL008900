#include <cstdlib>
#include <iostream>

using namespace std;
void sortArray(const int *, int *);	//�ŧi��ƭ쫬

int main(int argc, char *argv[])
{
	const int SIZE = 5;	//�ŧi��`�ƲŸ�
	int number[SIZE] = {57, 19, 33, 92, 6};	//�ŧi�@���}�C

	cout << "�Ƨǫe�G";	//��ܱƧǫe���
	for (int counti = 0; counti < SIZE; counti++)
		cout << number[counti] << '\0';

	sortArray(&SIZE, number);	//��number��sortArray

	cout << "\n�Ƨǫ�G";	//��ܱƧǫ���
	for (int countj=0; countj<SIZE; countj++)
		cout << number[countj] << '\0';
	cout << endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}

void sortArray(const int *MAX, int *array)	//��ܱƧǨ��
{
	int minimum, mindex;	//�ŧi�w�ľ��ܼ�
	for (int counti=0; counti<*MAX-1; counti++)	//�Ƨǥ~�j��
	{
		mindex = counti;	//mindex=�̤p�ȯ���
		minimum = *(array+counti);	//minimum=�̤p��
		for (int countj=counti+1; countj<*MAX; countj++)	//�ƧǤ��j��
		{
			if (*(array+countj) < minimum)        //�Y*(array+countj)<�̤p��
			{
				minimum = *(array+countj);	//minimum=�s�̤p��
				mindex = countj;	//mindex=�s�̤p�ȯ���
			}
		}
		*(array+mindex) = *(array+counti);      //*(array+�̤p�ȯ���)=���j��
		*(array+counti) = minimum;                //*(array+counti)=�̤p��
	}
}
