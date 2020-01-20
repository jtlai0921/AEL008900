#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;
double length(int);	//ㄧ计

int main(int argc, char *argv[])	//ㄧ计main 
{
	auto int ft;	//跋办跑计

	cout << "璣\t" << " そへ\n";	//陪ボ﹃
	cout << setprecision(4);	//砞﹚4Τ计
	cout << setiosflags(ios::fixed|ios::right);	//э4计Τ计
	for (ft = 1; ft <= 10; ft++)	//璣璸计
	{
		cout << setw(3) << ft << '\t';	//陪ボ璣へ
		cout << setw(6) << length(ft) << '\n';	//陪ボㄧ计肚そへ
	}
	system("PAUSE");
	return EXIT_SUCCESS;
}

double length(int ft)	//秖锣传ㄧ计
{
	auto double m;	//跋办跑计
	m = 0.3048 * double(ft);	//璣锣Θそへ
	return m;	//肚患m
}
