#include <cstdlib>
#include <iostream>

using namespace std;
void sortArray(int *);	//�ŧi��ƭ쫬

int main(int argc, char *argv[])
{
	int counti;	//�ŧi����ܼ�
	int number[5] = {57, 19, 33, 92, 6};	//�ŧi�@���}�C
	cout << "�Ƨǫe�G";	//��ܱƧǫe���
	for (counti=0; counti<5; counti++)
		cout << number[counti] << '\0';
	sortArray(number);	//��number��sortArray
	cout << "\n�Ƨǫ�G";	//��ܱƧǫ���
	for (counti=0; counti<5; counti++)
		cout << number[counti] << '\0';
	cout << endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}

void sortArray(int *array)	//��w�ƧǨ��
{
	int buffer;	//�ŧi�w�ľ��ܼ�
	for (int i=0; i<4; i++)	//�Ƨǥ~�j��
		for (int j=i; j<5; j++)	//�ƧǤ��j��
			if (*(array+i) > *(array+j))	//�Y���n�h���
			{
				buffer = *(array+i);
				*(array+i) = *(array+j);
				*(array+j) = buffer;
			}
}
