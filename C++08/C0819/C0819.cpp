#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
	int num = 100;	//�ŧi�ð_�l�ܼ�
	int *ptr1 = &num;	//�w�q�ܼƫ���
	cout << "*ptr1 = " << *ptr1 << endl;

	int *ptr2;	//�ŧi����
	ptr2 = new int(200);	//�t�m�ð_�l���Ф���
	cout << "*ptr2 = " << *ptr2 << endl;
	delete ptr2;	//����ptr2����

	int *ptr3 = new int(300);	//�ŧi�ð_�l���Ф���
	cout << "*ptr3 = " << *ptr3 << endl;
	delete ptr3; 	//����ptr3����
	system("PAUSE");
	return EXIT_SUCCESS;
}
