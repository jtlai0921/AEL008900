#include <cstdlib>
#include <iostream>
using namespace std;

void womain(void)	//�ϥΪ̨��
{
	cout << "How are you doing main, from womain.";
	cout << endl;
}

int main(int argc, char *argv[])
{
	cout << "Hi womain, This is main." << endl;
	womain();	//�I�s�ϥΪ̨��womain
	cout << "Fine, thank you!" << endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}
