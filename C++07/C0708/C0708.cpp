#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	int count, max = 0;	//�ŧi����ܼ�
	int number[5] = {5, 9, 3, 4, 7};	//�ŧi�ð_�lnumber�}�C
	for (count = 0; count <= 4; count++)	//��M�̤j�Ȱj��
	{
		if (number[count] > max)	//�Y�ƭ�>�w�ľ���
			max = number[count];	//�h���N�w�ľ���
	}
	cout << "5, 9, 3, 4, 7 ���ƪ��̤j�� = " << max;	//��̤ܳj��
	cout << endl;
	system("PAUSE");
	return EXIT_SUCCESS;
}
