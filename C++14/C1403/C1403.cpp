#include <cstdlib>
#include <iostream>

using namespace std;

bool check(int i)	//�t��throw�����
{
	try {			//try
		if (i<0 || i>9) throw i;	//�Y��J�W�X0-9�hthrow
		cout << "��J�� = " << i << endl;	//��ܿ�J��
		return true;
	} catch(int i) {	//�����ҥ~
		cout << "��J�� = " << i << "�A�W�X�d��I\n";	//��ܰT��
		return false;
	}
}

int main(int argc, char *argv[])
{
	int n;
	do
	{
		cout << "�п�J0 - 9 ����ơG";
		cin >> n;
	} while(check(n));	//�I�scheck���
	system("PAUSE");
	return EXIT_SUCCESS;
}
