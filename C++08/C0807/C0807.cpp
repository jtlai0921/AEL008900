#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
	double array[] = {3.0, 4.7, 2.6, 1.7, 2.2, 2.3};	//�ŧi�r���ܼ�

	const int SIZE = (sizeof array)/(sizeof array[0]);	//�p��}�C�Ӽ�
	cout.precision(1);	//�]�w���Ħ��1��
	cout.setf(ios::fixed);	//�אּ�p�Ʀ��Ħ��1��
	for(int i=0; i<SIZE; i++)	//��X�}�C�����j��
	{
		cout << "array ���� " << i << " �Ӥ����O�G";
		cout << *(array+i) << endl;	//��X�}�C���Ц�m���
	}

    system("PAUSE");
    return EXIT_SUCCESS;
}
