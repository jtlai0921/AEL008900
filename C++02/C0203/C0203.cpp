#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	double dType;
	cout << "int ���A���줸�ռ� = " 
		   << sizeof(int) << "bytes\n";	//���oint���A�j�p
	cout << "short ���A���줸�ռ� = " 
		   << sizeof(short) << "bytes\n";	//���oshort���A�j�p
	cout << "bool ���A���줸�ռ� = " 
		   << sizeof(bool) << "bytes\n";	//���obool���A�j�p
	cout << "�ܼ�dType���줸�ռ� = " 
		   << sizeof(dType) << "bytes\n";	//���o�ܼ�dType���j�p
	system("PAUSE");
	return EXIT_SUCCESS;
}
