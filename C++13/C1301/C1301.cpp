#include <cstdlib>
#include <iostream>
#include <string>	//C++���Astring���D��
using namespace std;

int main(int argc, char *argv[])
{
	string s1("c++ string class");	//�ŧi�ð_�ls1
	string s2 = s1;
	string s3(s1);
	string s4(s1, 4, 12); 
	string s5(s1, 0, 3);
	cout << "s1 = " << s1 << endl;	//��Xs1
	cout << "s2 = " << s2 << endl;	//��Xs2
	cout << "s3 = " << s3 << endl;	//��Xs3
	cout << "s4 = " << s4 << endl;	//��Xs4
	cout << "s5 = " << s5 << endl;	//��Xs5
	system("PAUSE");
	return EXIT_SUCCESS;
}
