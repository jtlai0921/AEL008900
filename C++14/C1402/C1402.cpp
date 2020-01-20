#include <cstdlib>
#include <iostream>

using namespace std;

void check(int i)	//含有throw的函數
{
	if (i<0 || i>9) throw i;	//若輸入超出0-9則throw
	cout << "輸入值 = " << i << endl;	//顯示輸入值
}

int main(int argc, char *argv[])
{
	int n;
	while (1)
	{
		cout << "請輸入0 - 9 的整數：";
		cin >> n;
		try {		//try
			check(n);	//呼叫check函數
		}
		catch(int i)	//chtch
		{
			cout << "輸入值 = " << i << "，超出範圍！\n";	//顯示訊息
		system("PAUSE");
		return EXIT_SUCCESS;
		}
	}
}
