#include <cstdlib>
#include <iostream>
#include <string>	//C++���Astring���D��
using namespace std;

int main(int argc, char *argv[])
{
	string s1("Hello"), s2(" world"), s3;
	s3 = s1 + s2;	//s3="Hello world"
	string s4(s3 + "!");	//s4="Hello world!"
	s1 += "!";	//s1="Hello!"
	cout << "s1 = " << s1 << endl;	//��Xs1
	cout << "s2 = " << s2 << endl;	//��Xs2
	cout << "s3 = " << s3 << endl;	//��Xs3
	cout << "s4 = " << s4 << endl;	//��Xs4
	system("PAUSE");
	return EXIT_SUCCESS;
}
