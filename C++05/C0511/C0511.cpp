#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	int count;
	cout << "1 �� 30 �� 3 �����Ƭ��G";
	for (count = 1; count <= 30; count++)	//�w�q�j��
	{
		if (count % 3 != 0)	//�Y���O3������
			continue;	//��^�j��_�I
		cout << count << '\0';	//���3�����ƨêŮ�
	}
	cout << endl;	//��X����
    system("PAUSE");
    return EXIT_SUCCESS;
}
