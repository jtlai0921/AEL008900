#include <cstdlib>
#include <iostream>	//C++���Aiostream���D��
#include <string>	//C++���Astring���D��
using namespace std;	//�ŧi�ϥ�C++���A���D��

int main(int argc, char *argv[])
{
	string s("call by reference");	//�ŧi�ð_�l�r��s

	cout << "���N�e���r��G" << s << endl;

	unsigned int p = s.find(" ");	//��M�Ĥ@�Ӫť�
	while( p<string::npos )	// �Y������r�굲���h�~��
	{
		s.replace(p, 1, "-");	//����H"-"���N" "
		p = s.find(" ", ++p);	//��M�U�@�Ӫť�
	}
	cout << "���N�᪺�r��G" << s << endl;
	system("PAUSE");
	return EXIT_SUCCESS;
}
