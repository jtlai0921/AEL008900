#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	int num;
	cout << "�п�J��ơG";
	cin >> num;	//��J���
	cout << num;	//��ܿ�J��
	cout << ((num >= 0) ? "�O����\n" : "�O�t��\n");	//�������B��ԭz
    system("PAUSE");
    return EXIT_SUCCESS;
}
