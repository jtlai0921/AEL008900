#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	const int max = 5;	//宣告整常數符號
	int counti, countj, buffer;	//宣告整數變數
	int number[max] = {57, 19, 33, 92, 6};	//宣告一維陣列
	cout << "排序前：";	//顯示排序前資料
	for (counti = 0; counti < max; counti++)
		cout << number[counti] << '\0';
	for (counti = 0; counti < max-1; counti++)	//排序外迴圈
		for (countj = counti; countj < max; countj++)	//排序內迴圈
			if (number[counti] > number[countj])	//若須要則對調
			{
				buffer = number[counti];
				number[counti] = number[countj];
				number[countj] = buffer;
			}
	cout << "\n排序後：";	//顯示排序後資料
	for (counti = 0; counti < max; counti++)
		cout << number[counti] << '\0';
	cout << endl;
	system("PAUSE");
	return EXIT_SUCCESS;
}
