#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[])
{
	int multiplier, faciend;
	for (faciend=1; faciend<=9; faciend++)	//�w�q�Q���ưj���1��9
	{
		for (multiplier=2; multiplier<=9; multiplier++)	//���ƥ�2�ƨ�9
		{
			cout << multiplier << '*'; 	//��Xmultiplier *
			cout << faciend << '=';	//��Xfaciend =
			cout << setw(2);	//�]�w��X�G���
			cout << multiplier*faciend << '\t';	//��X�B��ȫ���U�@�w��
		}
		cout << endl;	//��X����
	}
    system("PAUSE");
    return EXIT_SUCCESS;
}
