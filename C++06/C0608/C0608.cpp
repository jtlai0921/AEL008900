#include <cstdlib>
#include <iostream>
using namespace std;

void calculate(int, int, int);	//�ŧi��ƭ쫬

int main(int argc, char *argv[])    //�D���main 
{
	int chinese, english, math;	//�ŧi����ܼ�

	for (int i=0; i<3; i++)
	{
		cout << "�п�J���, �^��, �ƾǤ��ơG";
		cin >> chinese >> english >> math;	//��J3�Ӽƭ�
		calculate(chinese, english, math);	//�ǻ�3�ӰѼƵ�sum���
	}
	system("PAUSE");
	return EXIT_SUCCESS;
}

void calculate(int c, int e, int m)	//�p���`�M�P�������
{
	cout << "�`�� = " << c + e + m << endl;	//�p��ÿ�X�`�M
	cout << "���� = " << float((c + e + m) / 3);	//�p��ÿ�X����
	cout  << endl;
}
