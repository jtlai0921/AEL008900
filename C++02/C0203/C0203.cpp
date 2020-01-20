#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	double dType;
	cout << "int 篈じ舱计 = " 
		   << sizeof(int) << "bytes\n";	//眔int篈
	cout << "short 篈じ舱计 = " 
		   << sizeof(short) << "bytes\n";	//眔short篈
	cout << "bool 篈じ舱计 = " 
		   << sizeof(bool) << "bytes\n";	//眔bool篈
	cout << "跑计dTypeじ舱计 = " 
		   << sizeof(dType) << "bytes\n";	//眔跑计dType
	system("PAUSE");
	return EXIT_SUCCESS;
}
