#include <cstdlib>
#include <iostream>
using namespace std;
void weight(float lb = 1.0);	//�ŧi�쫬,���w�Ѽƹw�]��

int main(int argc, char *argv[])	//�D���main 
{
	weight(150.0);	//�ǻ��Ѽ�150.0
	weight(170.0);	//�ǻ��Ѽ�170.0
	weight();	//�ǻ��w�]�Ѽ�1
	system("PAUSE");
	return EXIT_SUCCESS;
}

void weight(float lb)	//���q�ഫ���
{
	cout << lb << "�S = " << lb / 2.20462 << "����"; 	//��ܨ�ƶǦ^��
	cout << endl;
}
