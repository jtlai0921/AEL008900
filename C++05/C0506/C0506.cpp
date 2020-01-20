#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[])
{
	int outer = 0;	//外層迴圈計數值
	while (outer++ <= 4)	//外層while條件
	{
		int inner = 0;	//內層迴圈計數值
		while (inner++ < outer) 	//內層while條件
		{
			cout << setw(3) << inner;	//輸出inner值
		} //end of inner
		cout << endl;
	} //end of outer
    system("PAUSE");
    return EXIT_SUCCESS;
}
