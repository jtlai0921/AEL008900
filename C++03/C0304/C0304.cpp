#include <cstdlib>
#include <iostream>
#include <iomanip.h>	//�]�tsetprecision()

using namespace std;
const double PI = 3.141592653;

int main(int argc, char *argv[])
{
	cout << PI << endl; 	//�ϥιw�]���ļƦr
	cout << setprecision(10) << PI << endl; 	//�]�w10�즳�ļƦr
	cout << setprecision(8) << PI << endl; 	//�]�w8�즳�ļƦr
	cout << setprecision(6) << PI << endl; 	//�]�w6�즳�ļƦr
	cout << setprecision(3) << PI << endl; 	//�]�w3�즳�ļƦr
	cout << setprecision(1) << PI << endl; 	//�]�w1�즳�ļƦr
    system("PAUSE");
    return EXIT_SUCCESS;
}
