#include <cstdlib>
#include <iostream>	//C++���Aiostream���D��
#include <string>	//C++���Astring���D��
using namespace std;	//�ŧi�ϥ�C++���A���D��

int main(int argc, char *argv[])
{
	string s1("ANSI C++"), s2("ISO");	//�ŧi�ð_�l�r��s1,s2
	cout << "���J���e��s2�r��G" << s2 << endl;
	cout << "���J���e��s1�r��G" << s1 << endl;

	s1.insert(4, s2);	//s1=ANSIISO C++
	cout << "���Js2�᪺s1�r��G" << s1 << endl;

	s1.insert(4, "/");	//s1=ANSI/ISO C++
	cout << "���J/�᪺s1�r�� �G" << s1 << endl;
	system("PAUSE");
	return EXIT_SUCCESS;
}
