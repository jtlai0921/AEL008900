#include <cstdlib>
#include <iostream>

using namespace std;
void capital(char *);	//�ŧi��ƭ쫬

int main(int argc, char *argv[])
{
	char str[] = "You will never win, if you never begin.\n";
	char *strPtr = &str[0];	//�ŧi�ð_�lC�r�����
	cout << "��ƦC�G" << str;
	capital(strPtr);	//�ǻ��r����е�capital
	cout << "����G" << str;
    system("PAUSE");
    return EXIT_SUCCESS;
}

void capital(char *s)	//�Ĥ@�Ӧr����j�g���
{
	while(*s != NULL)	//�Y���O�r�굲���h�~��
		if(*s++ == ' ') {	//�Y*s == ' '
			*s -= 32;	//�h*s++ -= 32
		}
}
