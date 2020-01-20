#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
	unsigned seed;	//unsigned int seed;
	cout << "請輸入種子數：";
	cin >> seed;	//輸入種子數
	srand(seed);	//設定亂數種子數
	cout << rand() << endl;	//輸出亂數
	cout << rand() << endl;	//輸出亂數
	cout << rand() << endl;	//輸出亂數
    system("PAUSE");
    return EXIT_SUCCESS;
}
