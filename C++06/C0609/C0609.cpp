#include <cstdlib>
#include <iostream>
using namespace std;
void swap(int &, int &);	//�ŧi��ƭ쫬

int main(int argc, char *argv[])	//�D���main 
{
	int var1 = 53, var2 = 75;	//�ŧi����ܼ�
	cout << "��իe�G ";
	cout << "A = " << var1 << '\t';	//��ܹ�իe���ƭ�A
	cout << "B = " << var2 << endl;	//��ܹ�իe���ƭ�B
	swap(var1, var2);	//�ǻ�var1�Pvar2����}
	cout << "��ի�G ";
	cout << "A = " << var1 << '\t';	//��ܹ�ի᪺�ƭ�A
	cout << "B = " << var2 << endl;	//��ܹ�ի᪺�ƭ�B
	system("PAUSE");
	return EXIT_SUCCESS;
}

void swap(int &num1, int &num2)	//��ƹ�ը��
{
	int buffer;
	buffer = num1;
	num1 = num2;
	num2 = buffer;
}
