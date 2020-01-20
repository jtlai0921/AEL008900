#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	int input;
	cout << "請輸入一個整數：";
	cin >> input;	//輸入字元並存入input
	if (input >= 0) {	//若input >= 0
		cout << input << " 是正數。\n";	//  顯示訊息
	}				//若input < 0則結束
    system("PAUSE");
    return EXIT_SUCCESS;
}
