#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[])
{
	char string[4];	//�ŧi�r���ܼ�string
	cout << "�п�J�r��G";	//��X�T���r��
	cin >> setw(4) >> string;	//�]�w��J�r�ƨè��o��J
	cout << "��J�r��O�G" << string;	//��ܰT���P��J�r��
    system("PAUSE");
    return EXIT_SUCCESS;
}
