#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;
void length(void);	//�ŧi��ƭ쫬
int m;		//�ŧi�����ܼ�
double ft;		//�ŧi�����ܼ�

int main(int argc, char *argv[])	//�D���main 
{
	cout << "����\t  �^�`\n";	//��ܦr��
	cout << setprecision(4);	//�]�w4�즳�Ħ��
	cout << setiosflags(ios::fixed|ios::right);	//�אּ4��p�Ʀ��Ħ��
	for (m = 1; m <= 10; m++)	//�H���ج��p�ƭ�
	{
		length();	//�I�s���
		cout << setw(3) << m << '\t';	//��X���ح�
		cout << setw(7) << ft << '\n';	//��X�^�`��
	}
	system("PAUSE");
	return EXIT_SUCCESS;
}

void length(void)	//���q�ഫ���
{
	ft = 3.20808 * double(m);	//�����ন�^�`
}
