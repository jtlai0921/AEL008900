#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
	float a, b, c, d, x = 6;	// �ŧi�ܼ�a,b,c,d,x
	int f = 20;	// �ŧi�ܼ� f = 20
	a = b = c = d  = float(f);	// �O a=b=c=d= 20
	cout	<< "a = b = c = d = f = 20, x = 6"	// ��X�r��
			<< "\na += x => a = " << (a += x)	// ��X����B�r��Ba ��
			<< "\nb -= x => b = " << (b -= x)	// ��X����B�r��Bb ��
			<< "\nc *= x => c = " << (c *= x)	// ��X����B�r��Bc ��
			<< "\nd /= x => d = " << (d /= x)	// ��X����B�r��Bd ��
			<< "\nf %= x => f = " << (f %= 6)	// ��X����B�r��Bf ��
			<< endl;	// ��X����
    system("PAUSE");
    return EXIT_SUCCESS;
}
