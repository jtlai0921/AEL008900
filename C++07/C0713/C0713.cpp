#include <cstdlib>
#include <iostream>
using namespace std;
const int MAX = 5;	//MAX = 陣列最大範圍

int main(int argc, char *argv[])
{
	int counti, countj, minimum, mindex;	//宣告整數變數
	int number[MAX] = {57, 19, 33, 92, 6};	//宣告一維陣列
	cout << "排序前：";	//顯示排序前資料
	for (counti = 0; counti < MAX; counti++)
		cout << number[counti] << '\0';
	for (counti = 0; counti < MAX-1; counti++)	//排序外迴圈
	{
		mindex = counti;	//mindex=最小值索引
		minimum = number[counti];	//minimum=最小值
		for (countj = counti+1; countj < MAX; countj++)	//排序內迴圈
		{
			if (number[countj] < minimum)         //若number[countj]<最小值
			{
				minimum = number[countj];	//minimum=新最小值
				mindex = countj;	//mindex=新最小值索引
			}
		}
		number[mindex] = number[counti];         //number[最小值索引]=較大值
		number[counti] = minimum;                 //number[counti]=最小值
	}
	cout << "\n排序後：";	//顯示排序後資料
	for (counti = 0; counti < MAX; counti++)
		cout << number[counti] << '\0';
	cout << endl;
	system("PAUSE");
	return EXIT_SUCCESS;
}
