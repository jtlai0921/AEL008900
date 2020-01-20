#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
	srand(time(NULL));	//以時間函數為種子數
	cout << rand() << endl;	//輸出亂數
	cout << rand() << endl;	//輸出亂數
	cout << rand() << endl;	//輸出亂數
    system("PAUSE");
    return EXIT_SUCCESS;
}
