#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	bool flag = false;	//�ŧi���L�ȺX��
	int count, search;	//�ŧi����ܼ�
	int number[5] = {57, 19, 33, 92, 6};	//�ŧi�ð_�lnumber�}�C

	cout << "��ܸ�ơG";
	for (count = 0; count <= 4; count++)	//��X�}�C��ưj��
		cout << number[count] << ' ';
	cout << "\n��J��ơG";
	cin >> search;	//Ū����L��J
	for (count = 0; count <= 4; count++)	//��M��ưj��
	{
		if (number[count] == search)	//�Y���==�w�ľ���
			flag = 1;
	}
	if (flag)	//�Y�����
		cout << "����ơG" << search << endl;
	else
		cout << "�䤣���ơG" << search << endl;
	system("PAUSE");
	return EXIT_SUCCESS;
}
