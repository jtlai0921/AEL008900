#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	int a[3] ={87, 93, 85};	//�w�q�P�_�l�}�C
	int sum = 0;		//�w�q�P�_�l�ܼ�
	for(int i=0; i<3; i++)
	{
		cout << "a[" << i << "] = " << a[i] << endl;	//��X�}�C���e
		sum += a[i];		//�p���`�M
	}
	cout << "�`�M = " << sum << endl;	//��X�`�M
	system("PAUSE");
	return EXIT_SUCCESS;
}
