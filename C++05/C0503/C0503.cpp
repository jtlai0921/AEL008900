#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	unsigned int year;
	do
	{
		cout << "請輸入整數，若輸入 0 則結束：";
		cin >> year;	//讀取鍵盤輸入
	} while (year != 0);	//若輸入不是0則迴圈繼續
    system("PAUSE");
    return EXIT_SUCCESS;
}
