#include <cstdlib>
#include <iostream>	//C++���Aiostream���D��
#include <string>	//C++���Astring���D��
using namespace std;	//�ŧi�ϥ�C++���A���D��

int main(int argc, char *argv[])
{
	string s1("ANSI/ISO C++");
	cout << "s1 = " << s1 << endl;	//��X�r��
	cout << "s1���� = " << s1.length() << endl;	//���o�r�����
	cout << "s1�j�p = " << s1.size() << endl;	//���o�r��j�p
	cout << "s1�e�q = " << s1.capacity() << endl;	//���o�r��e�q
	cout << "s1�̤j���� = " << s1.max_size() << endl;     //���o�r��̤j����
	cout << "s1��9�r�� = " << s1.at(9) << endl;	//���o�r���9�Ӧr��
	system("PAUSE");
	return EXIT_SUCCESS;
}
