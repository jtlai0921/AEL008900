#include <cstdlib>
#include <iostream>

using namespace std;
const int SIZE = 6;

int main(int argc, char *argv[])
{
	int array[SIZE];	//�ŧi�r���ܼ�
	int *arrayPtr = &array[0];	//�ŧi�ð_�l�}�C����
	int i;		//�ŧi����ܼ�

	cout << "�п�J " << SIZE << " ����Ƹ�ơG";
	for(i=0; i<SIZE; i++)	//��J�}�C�����j��
	{
		cin >> *arrayPtr++;	//��J��Ʀs�J���Ц�m
	}
	for(i=SIZE-1; i>=0; i--)	//��X�}�C�����j��
	{
		cout << "array ���� " << i << " �Ӥ����O�G";
		cout << *--arrayPtr << endl;	//��X�}�C���Ц�m���
	}

    system("PAUSE");
    return EXIT_SUCCESS;
}
