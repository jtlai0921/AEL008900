#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
	srand(time(NULL));	//以時間函數為種子數
	cout << 1 + rand() % (10 - 1 + 1) << endl;	//輸出1-10之間的亂數
	cout << 1 + rand() % (10 - 1 + 1) << endl;	//輸出1-10之間的亂數
	cout << 1 + rand() % (10 - 1 + 1) << endl;	//輸出1-10之間的亂數
    system("PAUSE");
    return EXIT_SUCCESS;
}
