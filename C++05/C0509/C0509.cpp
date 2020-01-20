#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[])
{
	cout.setf(ios::fixed | ios::right);	//設定輸出向右對齊
	cout.fill('0');	//若左邊空白則補0
	while (true)	//無窮迴圈
	{
		for (int hrs=0; hrs<24; hrs++)	//時: 從 0 數到 23
		{
			for (int min=0; min<60; min++)	//分: 從 0 數到 59
			{
				for (int sec=0; sec<60; sec++)	//秒: 從 0 數到 59
				{
				    cout << setw(2) << hrs << ':';	//輸出時數
				    cout << setw(2) << min << ':';	//輸出分鐘數
				    cout << setw(2) << sec << '\r';	//輸出秒數
				}
			}
		}
	}
    system("PAUSE");
    return EXIT_SUCCESS;
}
