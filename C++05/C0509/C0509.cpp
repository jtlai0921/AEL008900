#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[])
{
	cout.setf(ios::fixed | ios::right);	//�]�w��X�V�k���
	cout.fill('0');	//�Y����ťիh��0
	while (true)	//�L�a�j��
	{
		for (int hrs=0; hrs<24; hrs++)	//��: �q 0 �ƨ� 23
		{
			for (int min=0; min<60; min++)	//��: �q 0 �ƨ� 59
			{
				for (int sec=0; sec<60; sec++)	//��: �q 0 �ƨ� 59
				{
				    cout << setw(2) << hrs << ':';	//��X�ɼ�
				    cout << setw(2) << min << ':';	//��X������
				    cout << setw(2) << sec << '\r';	//��X���
				}
			}
		}
	}
    system("PAUSE");
    return EXIT_SUCCESS;
}
