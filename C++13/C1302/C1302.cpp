#include <cstdlib>
#include <iostream>
#include <string>	//C++���Astring���D��
using namespace std;

int main(int argc, char *argv[])
{
	string s1, s2;	//�ŧis1, s2
	cout << "�п�J s1 �r��G";
	getline(cin, s1);	//��J�r���s1
	cout << "�п�J s2 �r��G";
	cin >> s2;	//��J�r���s2
	cout << "s1 = " << s1 << endl;	//��Xs1
	cout << "s2 = " << s2 << endl;	//��Xs2
	system("PAUSE");
	return EXIT_SUCCESS;
}
