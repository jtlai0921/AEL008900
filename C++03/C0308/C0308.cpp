#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
	char key;	//宣告字元變數key
	cout << "請按任意鍵：";	//輸出訊息字串
	cin.get(key);	//取得鍵盤按鍵
	cout << "輸入按鍵是：" << key;	//顯示訊息與輸入字元
	cout << endl;	//跳行
    system("PAUSE");
    return EXIT_SUCCESS;
}
