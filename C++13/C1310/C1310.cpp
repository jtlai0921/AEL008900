#include <cstdlib>
#include <iostream>	//C++���Aiostream���D��
#include <string>	//C++���Astring���D��
using namespace std;

int main(int argc, char *argv[])
{
	string s1("ANSI/ISO C++"), s2("C++");
	int p1, p2;

	p1 = s1.find(s2);	// p1 = 7 (���A��m7)
	if(p1!=-1)	//�P�_�bs1���O�_���s2
		cout << s1 << " ���� " << p1 << " �r����m��� " << s2;	//��X��m
	else
		cout << s1 << " ���䤣�� " << s2;	//��X�r��
	cout << endl;

	p2 = s1.find("Visual");	// p2 = -1 (�䤣��)
	if(p2!=-1)	//�bs1���O�_���Visual
		cout << s1 << " ���� " << p2 << " �r����m��� Visual";	//��X��m
	else
		cout << s1 << " ���䤣�� Visual";	//��X�r��
	cout << endl;
	system("PAUSE");
	return EXIT_SUCCESS;
}
