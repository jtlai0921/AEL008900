#include <cstdlib>
#include <iostream>
using namespace std;

void womain(void);	//宣告使用者函數原型

int main(int argc, char *argv[])	//main函數
{
	cout << "Hi womain, This is main." << endl;
	womain();	//呼叫使用者函數womain
	cout << "Fine, thank you!" << endl;
	system("PAUSE");
	return EXIT_SUCCESS;
}

void womain(void)	//使用者函數womain
{
	cout << "How are you doing main, from womain.";
	cout << endl;
}
