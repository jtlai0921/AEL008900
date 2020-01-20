#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;
const double PI = 3.141592653;

int main(int argc, char *argv[])
{
	cout << setprecision(10);	//設定10位有效數字
	cout << setw(12) << PI * -1 << endl; 	//設定12空間輸出PI*-1
	cout << setw(12) << PI * 100 << endl; 	//設定12空間輸出PI*10^2
	cout << setw(12) << PI * 10000 << endl; 	//設定12空間輸出PI*10^4
    system("PAUSE");
    return EXIT_SUCCESS;
}
