#include <cstdlib>
#include <iostream>	//C++���Aiostream���D��
#include <string>	//C++���Astring���D��
using namespace std;

int main(int argc, char *argv[])
{
	string s1("Hello world!"), s2, s3;	//�ŧis1, s2, s3�r��
	s2.assign(s1);	// s2 = "Hello world!"

	s3.assign(s1, 6, 5);	// s3 = "world"
	s3[2] = 'u';	// s3 = "would"

	cout << "s1 = " << s1 << endl;	//��Xs1
	cout << "s2 = " << s2 << endl;	//��Xs2
	cout << "s3 = " << s3 << endl;	//��Xs3
	system("PAUSE");
	return EXIT_SUCCESS;
}
