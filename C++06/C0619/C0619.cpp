#include <cstdlib>
#include <iostream>
using namespace std;
int total(int);	//�ŧi��ƭ쫬

int main(int argc, char *argv[])	//�D���main 
{
	cout << "1+2+3+...+10=" << total(10);	//��ܨ�ƶǦ^��
	cout << "\n1+2+3+...+100=" << total(100);	//��ܨ�ƶǦ^��
	cout << endl;
	system("PAUSE");
	return EXIT_SUCCESS;
}

int total(int n)	//�p���`�M���
{
	if (n > 1)	//�Y n > 1
		return n + total(n-1);	//�I�s��Ʀۨ�
	else			//�Yn<=1
		return 1;	//�������^�I�s,�öǦ^1
}
