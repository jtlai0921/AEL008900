#include <cstdlib>
#include <iostream>
using namespace std;
#define MAX(x, y) ((x>y) ? x : y)	//�P�_���j�Ȩ�ƥ���
#define MIN(x, y) ((x<y) ? x : y)	//�P�_���p�Ȩ�ƥ���

int main(int argc, char *argv[])
{
	int num1, num2;
	cout << "�п�J�G�Ӿ�ơG";
	cin >> num1 >> num2;
	cout << num1 << " �M " << num2;
	cout << " �����j�ȬO " << MAX(num1, num2);	//�I�s�������MAX
	cout << endl;
	cout << num1 << " �M " << num2;
	cout << " �����p�ȬO " << MIN(num1, num2);	//�I�s�������MIN
	cout << endl;
	system("PAUSE");
	return EXIT_SUCCESS;
}
