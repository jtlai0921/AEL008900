#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
	int intVar1 = 12345;	//�ŧi�P�_�l���L���ܼ�
	int intVar2 = 2147483647;	//�ŧi�P�_�l����ܼ�
	float floatVar = 123.45e+12f;	//�ŧi�P�_�l�����ܼ�
	double doubleVar = 98765.43e-308;	//�ŧi�P�_�l������ܼ�
	
	cout << "  �ܼ�   \t  ��}\n";	//��X���Y
	cout << "---------\t--------\n";	//��X���j�u
	cout << "intVar1  \t" << &intVar1 << endl;	//��XintVar1��}
	cout << "intVar2  \t" << &intVar2 << endl;	//��XintVar2��}
	cout << "floatVar \t" << &floatVar << endl;	//��XfloatVar��}
	cout << "doubleVar\t" << &doubleVar << endl;	//��XdoubleVar��}

	system("PAUSE");
	return EXIT_SUCCESS;
}
