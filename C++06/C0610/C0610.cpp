#include <cstdlib>
#include <iostream>
using namespace std;
void weight(float lb = 1.0);	//,﹚把计箇砞

int main(int argc, char *argv[])	//ㄧ计main 
{
	weight(150.0);	//肚患把计150.0
	weight(170.0);	//肚患把计170.0
	weight();	//肚患箇砞把计1
	system("PAUSE");
	return EXIT_SUCCESS;
}

void weight(float lb)	//秖锣传ㄧ计
{
	cout << lb << "絊 = " << lb / 2.20462 << "そょ"; 	//陪ボㄧ计肚
	cout << endl;
}
