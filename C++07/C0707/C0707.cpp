#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	int source[3] = {5, 9, 3};	//�ŧi�ð_�lsource�}�C
	int target[3];	//�ŧitarget�}�C
	int i;

	cout << "�ƻs�e\n";
	for (i=0; i<=2; i++)	//��X�j��
	{
		cout << "source[" << i << "] = " << source[i] << '\t';
		cout << "target[" << i << "] = " << target[i] << endl;
	}
	for (i=0; i<=2; i++)	//�ƻs�j��
	{
		target[i] = source[i];	//�ƻssource��target
	}
	cout << "\n�ƻs��\n";
	for (i=0; i<=2; i++)	//��X�j��
	{
		cout << "source[" << i << "] = " << source[i] << '\t';
		cout << "target[" << i << "] = " << target[i] << endl;
	}
	for (i=0; i<=2; i++)	//�M���j��
	{
		target[i] = 0;	//�M��target
	}
	cout << "\n�M��target��\n";
	for (i=0; i<=2; i++)	//��X�j��
	{
		cout << "source[" << i << "] = " << source[i] << '\t';
		cout << "target[" << i << "] = " << target[i] << endl;
	}
	system("PAUSE");
	return EXIT_SUCCESS;
}
