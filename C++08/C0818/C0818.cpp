#include <cstdlib>
#include <iostream>

using namespace std;
int *maximum(int *);	//�ŧi��ƭ쫬

int main(int argc, char *argv[])
{
	int number[5] = {57, 19, 33, 92, 6};	//�ŧi�@���}�C

	cout << "��ƦC�G";
	for (int i=0; i<=4; i++)	//��X�}�C��ưj��
		cout << *(number+i) << ' ';

	cout << "\n�̤j�ȡG" << *maximum(number);	//���omaximum������
	cout << endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}

int *maximum(int *array)	//�j�M�̤j�Ȩ��
{
	static int value;	//�ŧi����ܼ�
	static int *max = &value;	//�ŧi�ð_�lmax����
	*max = 0;	//�_�l*max���t��
	for (int i=0; i<=4; i++)	//��M�̤j�Ȱj��
	{
		if (*max < *(array+i))	//�Y*max��<�}�C������
			*max = *(array+i);
	}
	return max;	//�Ǧ^max����
}
