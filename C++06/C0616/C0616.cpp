#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;
#include "C0616.hpp"	//���J�۫ؼ��D��
double c;		//�ŧi�����ܼ�

int main(int argc, char *argv[])	//�D���main 
{
	cout << "���\t �ؤ�\n";	//��ܦr��
	cout << setprecision(2);	//�]�w2�즳�Ħ��
	cout << setiosflags(ios::fixed|ios::right);	//�אּ2��p�Ʀ��Ħ��
	for (c = 36; c <= 40; c++)	//���ū�=�p��
	{
		cout << setw(5) << c << '\t';	//��ܭ^�ح�
		cout << setw(6) << degree() << '\n';	//��ܨ�ƶǦ^���ح�
	}
	system("PAUSE");
	return EXIT_SUCCESS;
}
