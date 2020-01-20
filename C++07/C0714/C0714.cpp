#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	bool flag = false;	//宣告布林值旗號
	int count, search;	//宣告整數變數
	int number[5] = {57, 19, 33, 92, 6};	//宣告並起始number陣列

	cout << "顯示資料：";
	for (count = 0; count <= 4; count++)	//輸出陣列資料迴圈
		cout << number[count] << ' ';
	cout << "\n輸入資料：";
	cin >> search;	//讀取鍵盤輸入
	for (count = 0; count <= 4; count++)	//找尋資料迴圈
	{
		if (number[count] == search)	//若資料==緩衝器值
			flag = 1;
	}
	if (flag)	//若找到資料
		cout << "找到資料：" << search << endl;
	else
		cout << "找不到資料：" << search << endl;
	system("PAUSE");
	return EXIT_SUCCESS;
}
