#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	cout << "1 至 30 間的質數有: ";
	for(int i=2; i<=30; i++)	//搜尋 2 至 30
	{
		for(int j=2; j<i; j++)	//除數從 2 至 i
		{
			if(i%j==0)	//若整除則非質數
			    break;	//中斷內迴圈
			else if(j==i-1)	//確定為質數
			    cout << i << " ";
		}
	}
	cout << endl;    //跳行 
    system("PAUSE");
    return EXIT_SUCCESS;
}
