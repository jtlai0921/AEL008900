#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
	short n1 = 32767;	//n1=32767=0x7fff
	cout << n1 << " + 1 = ";
	n1 = n1 + 1;	//n1+1=-32768�W������
	cout << n1 << endl;

	unsigned short n2 = 65535;	//n2=0xffff
	cout << n2 << " + 1 = ";
	n2 = n2 + 1;	//n2+1=0x0000=0����
	cout << n2 << endl;

	short n3 = -32768;	//n3=-32768=0x8000
	cout << n3 << " - 1 = ";
	n3 = n3 - 1;	//n3-1=32767�U������
	cout << n3 << endl;

	unsigned short n4 = 0;	//n4=0x0000
	cout << n4 << " - 1 = ";
	n4 = n4 - 1;	//n4-1=xffff=65536����
	cout << n4 << endl;

    system("PAUSE");
    return EXIT_SUCCESS;
}
