#include <cstdlib>
#include <iostream>

using namespace std;
const int SIZE = 6;

int main(int argc, char *argv[])
{
	int array[SIZE];	//�ŧi�r���ܼ�
	int i;		//�ŧi����ܼ�

	cout << "�п�J " << SIZE << " ����Ƹ�ơG";
	for(i=0; i<SIZE; i++)	//��J�}�C�����j��
	{
		cin >> *(array+i);	//��J��Ʀs�J���Ц�m
	}
	for(i=0; i<SIZE; i++)	//��X�}�C�����j��
	{
		cout << "array ���� " << i << " �Ӥ����O�G";
		cout << *(array+i) << endl;	//��X�}�C���Ц�m���
	}

    system("PAUSE");
    return EXIT_SUCCESS;
}
