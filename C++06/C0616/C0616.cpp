#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;
#include "C0616.hpp"	//础夹肈郎
double c;		//そノ跑计

int main(int argc, char *argv[])	//ㄧ计main 
{
	cout << "尼ん\t 地ん\n";	//陪ボ﹃
	cout << setprecision(2);	//砞﹚2Τ计
	cout << setiosflags(ios::fixed|ios::right);	//э2计Τ计
	for (c = 36; c <= 40; c++)	//尼ん放=璸计
	{
		cout << setw(5) << c << '\t';	//陪ボ璣へ
		cout << setw(6) << degree() << '\n';	//陪ボㄧ计肚そへ
	}
	system("PAUSE");
	return EXIT_SUCCESS;
}
