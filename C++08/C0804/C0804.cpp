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

	cout << "�ܼƦW�� \t�ܼƵ���\t��}����\t���Ф���\n";	//��X���Y
	cout << "---------\t--------\t--------\t--------\n";	//��X���j�u
	//��X�ܼƦW�١B�ܼƭȡB��}���t�ȡB�P���Ф��t��
	cout << "bool     \t" 
	     << setw(8) << boolVar << '\t'	//�Q���ܼƨ��o����
	     << setw(8) << *(&boolVar) << '\t'	//�Q�Φ�}���o����
	     << setw(8) << *boolPtr << endl;	//�Q�Ϋ��Ш��o����
	cout << "intVar   \t" 
	     << setw(8) << intVar << '\t' 	//�Q���ܼƨ��o����
	     << setw(8) << *(&intVar) << '\t'	//�Q�Φ�}���o����
	     << setw(8) << *intPtr << endl;	//�Q�Ϋ��Ш��o����
	cout << "floatVar \t" 
	     << setw(8) << floatVar << '\t' 	//�Q���ܼƨ��o����
	     << setw(8) << *(&floatVar) << '\t'	//�Q�Φ�}���o����
	     << setw(8) << *floatPtr << endl;	//�Q�Ϋ��Ш��o����
	cout << "doubleVar\t" 
	     << setw(8) << doubleVar << '\t' 	//�Q���ܼƨ��o����
	     << setw(8) << *(&doubleVar) << '\t'	//�Q�Φ�}���o����
	     << setw(8) << *doublePtr << endl;	//�Q�Ϋ��Ш��o����

    system("PAUSE");
    return EXIT_SUCCESS;
}
