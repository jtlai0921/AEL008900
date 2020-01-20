#include <cstdlib>
#include <iostream>
using namespace std;
int factorial(int);	//宣告函數原型

int main(int argc, char *argv[])	//主函數main 
{
	cout << "3! = " << factorial(3);	//顯示函數傳回值
	cout << "\n5! = " << factorial(5);	//顯示函數傳回值
	cout << "\n7! = " << factorial(7);	//顯示函數傳回值
	cout << endl;
	system("PAUSE");
	return EXIT_SUCCESS;
}

int factorial(int n)	//計算階乘函數
{
	int fact = 1;	//宣告區域變數
	for (int i = 1; i <= n; i++)	//計算階乘迴圈
		fact *= i;
	return fact;	//傳回fact給呼叫敘述
}
