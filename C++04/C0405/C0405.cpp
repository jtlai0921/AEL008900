#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	int num;
	cout << "請輸入整數：";
	cin >> num;	//輸入整數
	cout << num;	//顯示輸入值
	cout << ((num >= 0) ? "是正數\n" : "是負數\n");	//執行條件運算敘述
    system("PAUSE");
    return EXIT_SUCCESS;
}
