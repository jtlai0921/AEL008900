#include <cstdlib>
#include <iostream>
using namespace std;
int total(int);	//宣告函數原型

int main(int argc, char *argv[])	//主函數main 
{
	cout << "1+2+3+...+10=" << total(10);	//顯示函數傳回值
	cout << "\n1+2+3+...+100=" << total(100);	//顯示函數傳回值
	cout << endl;
	system("PAUSE");
	return EXIT_SUCCESS;
}

int total(int n)	//計算總和函數
{
	if (n > 1)	//若 n > 1
		return n + total(n-1);	//呼叫函數自身
	else			//若n<=1
		return 1;	//結束遞回呼叫,並傳回1
}
