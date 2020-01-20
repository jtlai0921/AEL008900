#include <cstdlib>
#include <iostream>
using namespace std;

void womain(void);	//ㄏノㄧ计

int main(int argc, char *argv[])	//mainㄧ计
{
	cout << "Hi womain, This is main." << endl;
	womain();	//㊣ㄏノㄧ计womain
	cout << "Fine, thank you!" << endl;
	system("PAUSE");
	return EXIT_SUCCESS;
}

void womain(void)	//ㄏノㄧ计womain
{
	cout << "How are you doing main, from womain.";
	cout << endl;
}
