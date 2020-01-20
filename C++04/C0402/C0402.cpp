#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	int number;
	cout << "請輸入一個整數：";
	cin >> number;	//輸入字元並存入number
	if (number >= 0) {	//若number >= 0
		cout << number << " 是正整數。\n";	//  顯示訊息
	}				//if區塊結束點
	else {		//若number < 0
		cout << number << " 是負整數。\n";	//  顯示訊息
	}				//else區塊結束點
    system("PAUSE");
    return EXIT_SUCCESS;
}
