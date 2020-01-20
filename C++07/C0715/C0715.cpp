#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	const int max = 5;	//宣告常數符號
	int counti, countj, buffer;	//宣告整數變數
	int search, low = 0, high = max-1, middle;	//宣告整數變數
	int number[max] = {57, 19, 33, 92, 6};	//宣告整數陣列
	cout << "排序前：";	//顯示排序前之值
	for (counti = 0; counti < max; counti++)
		cout << number[counti] << '\0';
	cout << "\n請輸入要搜尋數值："; cin >> search;	//輸入搜尋值
	for (counti = 0; counti < max-1; counti++)	//排序迴圈
		for (countj = counti; countj < max; countj++)
			if (number[counti] > number[countj])
			{
				buffer = number[counti];
				number[counti] = number[countj];
				number[countj] = buffer;
			}
	cout << "\n排序後：";	//顯示排序後之值
	for (counti = 0; counti < max; counti++)
		cout << number[counti] << '\0';
	do				//搜尋迴圈
	{
		if ((low + high) % 2 > 0.5)	//計算搜尋位置
			middle = (low + high) / 2 + 1;
		else
			middle = (low + high) / 2;

		if (search < number[middle])	//計算搜尋上限
			high = middle - 1; 
		else if (search > number[middle])	//計算搜尋下限
			low = middle + 1;
		else if (search == number[middle])	//找到相符數值
			break;
	} while (low <= high);
	if (low > high)	//顯示搜尋結果
		cout << "\n找不到數值：" << search << endl;
	else
		cout << "\n找到數值：" << search << endl;
	system("PAUSE");
	return EXIT_SUCCESS;
}
