#include <cstdlib>
#include <iostream>
using namespace std;
bool number(int);	//ㄧ计

int main(int argc, char *argv[])	//ㄧ计main 
{
	int val;		//俱计跑计

	cout << "叫块俱计";
	cin >> val;	//弄龄絃块
	if(number(val))	//璝number(val)==true
		cout << val << " 琌案计\n";
	else
		cout << val << " 琌计\n";
	system("PAUSE");
	return EXIT_SUCCESS;
}

bool number(int n)	//耞案计ㄧ计
{
	if (n % 2 == 0)	//璝把计n埃0緇计0
		return true;	//肚true
	else
		return false;	//肚false
}
