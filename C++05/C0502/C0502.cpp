#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	int count = 11, sum = 0;

	while (--count >= 1)	//定義while迴圈
		sum += count;	//sum=sum+count
	cout << "10 + 9 + 8 + ... + 1 = " << sum	//輸出字串與總和
		 << endl;	//跳行
    system("PAUSE");
    return EXIT_SUCCESS;
}
