#include <cstdlib>
#include <iostream>
using namespace std;
int factorial(int);	//�ŧi��ƭ쫬

int main(int argc, char *argv[])	//�D���main 
{
	cout << "3! = " << factorial(3);	//��ܨ�ƶǦ^��
	cout << "\n5! = " << factorial(5);	//��ܨ�ƶǦ^��
	cout << "\n7! = " << factorial(7);	//��ܨ�ƶǦ^��
	cout << endl;
	system("PAUSE");
	return EXIT_SUCCESS;
}

int factorial(int n)	//�p�ⶥ�����
{
	int fact = 1;	//�ŧi�ϰ��ܼ�
	for (int i = 1; i <= n; i++)	//�p�ⶥ���j��
		fact *= i;
	return fact;	//�Ǧ^fact���I�s�ԭz
}
