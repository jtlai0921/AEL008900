#include <cstdlib>
#include <iostream>
using namespace std;

void womain(void)	//使用者函數
{
	cout << "How are you doing main, from womain.";
	cout << endl;
}

int main(int argc, char *argv[])
{
	cout << "Hi womain, This is main." << endl;
	womain();	//呼叫使用者函數womain
	cout << "Fine, thank you!" << endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}
