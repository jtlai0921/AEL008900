#include <cstdlib>
#include <iostream>
using namespace std;

void number(int n);	//�ŧi��ƭ쫬

int main(int argc, char *argv[])
{
	number(5);	//�ǻ�5��number���
	number(58);	//�ǻ�58��number���
	number(135);	//�ǻ�135��number���
	system("PAUSE");
	return EXIT_SUCCESS;
}
void number(int n)	//�P�_5�����ƨ��
{
	if (n % 5 == 0)	//�Y�Ѽ�n���H5�l�Ƭ�0
		cout << n << " �O 5 ������\n";
	else
		cout << n << " ���O 5 ������\n";
}
