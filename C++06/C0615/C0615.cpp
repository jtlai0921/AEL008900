#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;
void length(void);	//ㄧ计
int m;		//そノ跑计
double ft;		//そノ跑计

int main(int argc, char *argv[])	//ㄧ计main 
{
	cout << "そへ\t  璣\n";	//陪ボ﹃
	cout << setprecision(4);	//砞﹚4Τ计
	cout << setiosflags(ios::fixed|ios::right);	//э4计Τ计
	for (m = 1; m <= 10; m++)	//そへ璸计
	{
		length();	//㊣ㄧ计
		cout << setw(3) << m << '\t';	//块そへ
		cout << setw(7) << ft << '\n';	//块璣
	}
	system("PAUSE");
	return EXIT_SUCCESS;
}

void length(void)	//秖锣传ㄧ计
{
	ft = 3.20808 * double(m);	//そへ锣Θ璣
}
