#include <cstdlib>
#include <iostream>	//C++���Aiostream���D��
#include <string>	//C++���Astring���D��
using namespace std;

int main(int argc, char *argv[])
{
	string s1("Hello"), s2("wi"), s3("world!");
	cout << "�걵�e\n";
	cout << "s1 = " << s1 << endl;	//��Xs1
	cout << "s2 = " << s2 << endl;	//��Xs2
	cout << "s3 = " << s3 << endl;	//��Xs3

	s1.append(' ' + s3);	// s1 = "Hello world!"
	s2.append(s3, 3, 2);	// s2 = "wild"

	cout << "�걵��\n";
	cout << "s1 = " << s1 << endl;	//��Xs1
	cout << "s2 = " << s2 << endl;	//��Xs2
	cout << "s3 = " << s3 << endl;	//��Xs3
	system("PAUSE");
	return EXIT_SUCCESS;
}
