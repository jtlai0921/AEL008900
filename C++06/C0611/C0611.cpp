#include <cstdlib>
#include <iostream>
using namespace std;
int total(int);	//�ŧi��ƭ쫬

int main(int argc, char *argv[])	//�D���main 
{
	cout << "1+2+3+...+10=" << total(10);	//��ܨ�ƶǦ^��
	cout << "\n1+2+3+...+100=" << total(100);	//��ܨ�ƶǦ^��
	cout << "\n1+2+3+...+1000=" << total(1000);	//��ܨ�ƶǦ^��
	cout << endl;
	system("PAUSE");
	return EXIT_SUCCESS;
}

int total(int n)	//�p��1+2+�K+n���
{
	int sum = 0;	//�ŧi�ϰ��ܼ�
	for (int i = 1; i <= n; i++)	//�p���`�M�j��
		sum += i;
	return sum;	//�Ǧ^sum���I�s�ԭz
}
