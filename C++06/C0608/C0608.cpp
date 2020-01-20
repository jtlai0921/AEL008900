#include <cstdlib>
#include <iostream>
using namespace std;

void calculate(int, int, int);	//宣告函數原型

int main(int argc, char *argv[])    //主函數main 
{
	int chinese, english, math;	//宣告整數變數

	for (int i=0; i<3; i++)
	{
		cout << "請輸入國文, 英文, 數學分數：";
		cin >> chinese >> english >> math;	//輸入3個數值
		calculate(chinese, english, math);	//傳遞3個參數給sum函數
	}
	system("PAUSE");
	return EXIT_SUCCESS;
}

void calculate(int c, int e, int m)	//計算總和與平均函數
{
	cout << "總分 = " << c + e + m << endl;	//計算並輸出總和
	cout << "平均 = " << float((c + e + m) / 3);	//計算並輸出平均
	cout  << endl;
}
