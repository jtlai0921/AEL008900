#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	int source[3] = {5, 9, 3};	//�ŧi�@���}�C�ܼ�
	int target[3] = {0};	//�_�ltarget������0
	cout << "�ƻs�e\n";
	for (int i=0; i<=2; i++)	//��X�ӷ��j��
	{
		cout << "source[" << i << "] = " << source[i] << '\t';
		cout << "target[" << i << "] = " << target[i] << endl;
	}
	for (int j=0; j<=2; j++)	//�ƻs�j��
	{
		target[j] = source[j];	//�ƻssource��target
	}
	cout << "\n�ƻs��\n";
	for (int k=0; k<=2; k++)	//��X�ت��j��
	{
		cout << "source[" << k << "] = " << source[k] << '\t';
		cout << "target[" << k << "] = " << target[k] << endl;
	}
	system("PAUSE");
	return EXIT_SUCCESS;
}
