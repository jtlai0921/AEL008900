#include <cstdlib>
#include <iostream>
#include <iomanip.h>	//setprecision()

using namespace std;
const double PI = 3.141592653;

int main(int argc, char *argv[])
{
	cout << PI << endl; 	//ㄏノ箇砞Τ计
	cout << setprecision(10) << PI << endl; 	//砞﹚10Τ计
	cout << setprecision(8) << PI << endl; 	//砞﹚8Τ计
	cout << setprecision(6) << PI << endl; 	//砞﹚6Τ计
	cout << setprecision(3) << PI << endl; 	//砞﹚3Τ计
	cout << setprecision(1) << PI << endl; 	//砞﹚1Τ计
    system("PAUSE");
    return EXIT_SUCCESS;
}
