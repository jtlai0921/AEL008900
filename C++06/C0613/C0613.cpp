#include <cstdlib>
#include <iostream>
using namespace std;
bool number(int);	//�ŧi��ƭ쫬

int main(int argc, char *argv[])	//�D���main 
{
	int val;		//�ŧi����ܼ�

	cout << "�п�J��ơG";
	cin >> val;	//Ū����L��J
	if(number(val))	//�Ynumber(val)==true
		cout << val << " �O����\n";
	else
		cout << val << " �O�_��\n";
	system("PAUSE");
	return EXIT_SUCCESS;
}

bool number(int n)	//�P�_�_���ƨ��
{
	if (n % 2 == 0)	//�Y�Ѽ�n���H0�l�Ƭ�0
		return true;	//�Ǧ^true
	else
		return false;	//�Ǧ^false
}
