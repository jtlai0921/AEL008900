#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char *argv[])
{
	bool boolVar = true;	//�ŧi�P�_�l���L���ܼ�
	int intVar = 65536;	//�ŧi�P�_�l����ܼ�
	float floatVar = 123.45f;	//�ŧi�P�_�l�����ܼ�
	double doubleVar = 98765.43;	//�ŧi�P�_�l������ܼ�
	
	bool* boolPtr = &boolVar;	//�]�wboolVar����
	int* intPtr = &intVar;	//�]�wintVar����
	float* floatPtr = &floatVar;	//�]�wfloatVar����
	double* doublePtr = &doubleVar;	//�]�wdoubleVar����

	cout << "�ܼƦW�� \t�ܼƫ���\t�ܼƪ���\n";	//��X���Y
	cout << "---------\t--------\t--------\n";	//��X���j�u
	//��X�ܼƦW�١B���СB�P����
	cout << "bool     \t" << boolPtr << '\t' 	//��XboolVar����
	     << setw(5) << sizeof(boolVar) << endl; 	//��XboolVar����
	cout << "intVar   \t" << intPtr << '\t'  	//��XintVar����
	     << setw(5) << sizeof(intVar) << endl;	//��XintVar����
	cout << "floatVar \t" << floatPtr << '\t'  	//��XfloatVar����
	     << setw(5) << sizeof(floatVar) << endl;	//��XfloatVar����
	cout << "doubleVar\t" << doublePtr << '\t'  	//��XdoubleVar����
	     << setw(5) << sizeof(doubleVar) << endl;	//��XdoubleVar����

    system("PAUSE");
    return EXIT_SUCCESS;
}
