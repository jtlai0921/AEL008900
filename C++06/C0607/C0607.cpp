#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;

void area(float, float);	//�ŧi��ƭ쫬

int main(int argc, char *argv[])            //�D���main 
{
	const float PI = 3.1415926f;	//�ŧi�`�ƲŸ�
	cout << "��b�|\t  �ꭱ�n\n";	//��X���Y�r��
	area(PI, 5.0);	//�ǻ�2�ӰѼƵ�area
	area(PI, 15.0);	//�ǻ�2�ӰѼƵ�area
	area(PI, 25.0);	//�ǻ�2�ӰѼƵ�area
	system("PAUSE");
	return EXIT_SUCCESS;
}

void area(float pi, float r)	//�p��ꭱ�n���
{
	cout.precision(2);	//�]�w��X�榡
	cout.setf(ios::fixed|ios::right);	//�]�w��X���Ħ��
	cout << setw(6) << r << '\t';	//��X��b�|��
	cout << setw(8) << pi * r * r << endl;	//�p��ÿ�X�ꭱ�n
}
