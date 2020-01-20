#include <cstdlib>
#include <iostream>	//C++型態iostream標題檔
#include <string>	//C++型態string標題檔
using namespace std;	//宣告使用C++型態標題檔

int main(int argc, char *argv[])
{
	string s1("ANSI C++"), s2("ISO");	//宣告並起始字串s1,s2
	cout << "插入之前的s2字串：" << s2 << endl;
	cout << "插入之前的s1字串：" << s1 << endl;

	s1.insert(4, s2);	//s1=ANSIISO C++
	cout << "插入s2後的s1字串：" << s1 << endl;

	s1.insert(4, "/");	//s1=ANSI/ISO C++
	cout << "插入/後的s1字串 ：" << s1 << endl;
	system("PAUSE");
	return EXIT_SUCCESS;
}
