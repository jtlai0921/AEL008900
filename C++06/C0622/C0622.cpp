#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;
#define	BEGIN  {	//�w�q�_�l�Ÿ�
#define	END    }	//�w�q�����Ÿ�
#define	TAB    '\t'	//�w�q�w��Ÿ�
#define	PI     3.14159	//�w�q�`�ƲŸ�

int main(int argc, char *argv[])
BEGIN				//�ϥΰ_�l�Ÿ�
	cout << "�b�|\t��P��\t   �ꭱ�n\n";
	cout.precision(3); cout.setf(ios::fixed);	//�]�w��X�榡
	for (int r = 5; r <= 10; r++)	//��ܭp��Ȱj��
	BEGIN			//�ϥΰ_�l�Ÿ�
		cout << setw(3) << r << TAB;	//��ܶ�b�|��
		cout << setw(6) << 2 * PI * r << TAB;	//��ܶ�P����
		cout << setw(9) << PI * r * r << endl;	//��ܶꭱ�n��
	END			//�ϥε����Ÿ�
	system("PAUSE");
	return EXIT_SUCCESS;
END				//�ϥε����Ÿ�
