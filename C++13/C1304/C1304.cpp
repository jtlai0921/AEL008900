#include <cstdlib>
#include <iostream>
#include <string>	//C++���Astring���D��
using namespace std;

int main(int argc, char *argv[])
{
	string s1, s2;	//�إ�s1, s2�r�ꪫ��
	cout << "�п�Js1�G";
	getline(cin, s1);	//��Js1�r��
	cout << "�п�Js2�G";
	getline(cin, s2);	//��Js2�r��

	if(s1 == s2)	//���s1�Ps2
		cout << "s1 == s2\n";
	else
		cout << "s1 != s2\n";
	system("PAUSE");
	return EXIT_SUCCESS;
}
