#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[])
{
	int a[2][3] ={ {87, 93, 85},	//�_�la[0][0]~a[0][2]
			{95, 85, 90} };	//�_�la[1][0]~a[1][2]
	int sum[2] = {0, 0};	//�w�q�P�_�lsum�}�C
	cout << "�Ǹ�\t���\t�^��\t�ƾ�\t�`��\n";
	cout << "----\t----\t----\t----\t----\n";
	for(int i=0; i<2; i++)
	{
		cout << " a" << i << '\t';	//��X�Ǹ�
		for(int j=0; j<3; j++)
		{
			cout << setw(3) << a[i][j] << '\t';	//��X�ӤH���Z
			sum[i] += a[i][j];	//�p��ӤH�`�M
		}
		cout << setw(4) << sum[i] << endl;	//��X�`�M
	}
	system("PAUSE");
	return EXIT_SUCCESS;
}
