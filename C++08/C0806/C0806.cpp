#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
	short array[] = {30, 47, 26, 17, 22, 23};	//�ŧi�r���ܼ�
	short *arrayPtr;	//�ŧi�B�I�ƫ���

	const int SIZE = (sizeof array)/(sizeof array[0]);	//�p��}�C�Ӽ�
	for(int i=0; i<SIZE; i++)
	{
		arrayPtr = &array[i];	//��s���Ц�m
		cout << "array ���� " << i << " �Ӥ����O�G";
		cout << *arrayPtr << endl;	//��X���Ц�m���
	}

    system("PAUSE");
    return EXIT_SUCCESS;
}
