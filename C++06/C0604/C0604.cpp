#include <cstdlib>
#include <iostream>
using namespace std;

void womain(void);	//�ŧi�ϥΪ̨�ƭ쫬

int main(int argc, char *argv[])	//main���
{
	cout << "Hi womain, This is main." << endl;
	womain();	//�I�s�ϥΪ̨��womain
	cout << "Fine, thank you!" << endl;
	system("PAUSE");
	return EXIT_SUCCESS;
}

void womain(void)	//�ϥΪ̨��womain
{
	cout << "How are you doing main, from womain.";
	cout << endl;
}
