#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;
const double PI = 3.141592653;

int main(int argc, char *argv[])
{
	cout << setprecision(10);	//�]�w10�즳�ļƦr
	cout << setw(12) << PI * -1 << endl; 	//�]�w12�Ŷ���XPI*-1
	cout << setw(12) << PI * 100 << endl; 	//�]�w12�Ŷ���XPI*10^2
	cout << setw(12) << PI * 10000 << endl; 	//�]�w12�Ŷ���XPI*10^4
    system("PAUSE");
    return EXIT_SUCCESS;
}
