#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	int count = 10, sum = 0;

	do
		sum += count;	//sum=sum+count
	while (--count >= 1);	//設定while條件
	cout << "10 + 9 + 8 + ... + 1 = " << sum	//輸出字串與總和
		 << endl;	//跳行
    system("PAUSE");
    return EXIT_SUCCESS;
}
