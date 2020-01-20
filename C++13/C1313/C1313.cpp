#include <cstdlib>
#include <iostream>	//C++型態iostream標題檔
#include <string>	//C++型態string標題檔
using namespace std;	//宣告使用C++型態標題檔

int main(int argc, char *argv[])
{
	string s1("ANSI/ISO C++");
	cout << "s1 = " << s1 << endl;	//輸出字串
	cout << "s1長度 = " << s1.length() << endl;	//取得字串長度
	cout << "s1大小 = " << s1.size() << endl;	//取得字串大小
	cout << "s1容量 = " << s1.capacity() << endl;	//取得字串容量
	cout << "s1最大長度 = " << s1.max_size() << endl;     //取得字串最大長度
	cout << "s1第9字元 = " << s1.at(9) << endl;	//取得字串第9個字元
	system("PAUSE");
	return EXIT_SUCCESS;
}
