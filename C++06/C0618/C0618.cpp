#include <cstdlib>
#include <iostream>
using namespace std;
int total(int);	//�ŧi��ƭ쫬

int main(int argc, char *argv[])	//�D���main 
{
	int count, oddsum;	//�ŧi�ϰ��ܼ�
	for (count = 1; count <= 100; count += 2)	//�I�s��ưj��
		oddsum = total(count);	//oddsum=��ƶǦ^��
	cout << "1+3+5+...+99=" << oddsum;	//��̫ܳ�oddsum��
	cout << endl;
	system("PAUSE");
	return EXIT_SUCCESS;
}

int total(int n)	//�p���`�M���
{
	static int sum;	//�ŧi�R�A�ܼ�
	sum += n;	//sum(n+1)=sum(n)+n
	return sum;	//��^�öǦ^sum
}
