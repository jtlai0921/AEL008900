#include <cstdlib>
#include <iostream>
#include <iomanip> 
using namespace std;

int main(int argc, char *argv[])
{
	int ini, max;	//�ŧi����ܼ�
	char days[7][7] = { "�P����", "�P���@", "�P���G", 
                        "�P���T", "�P���|", "�P����",
                         "�P����", };	//�ŧi�ð_�l�G���r��}�C

	cout << "��J���몺�`�ѼơG"; cin >> max;	//��J�`�Ѽ�
	cout << "����Ĥ@�ѬP���X�G"; cin >> ini;	//��J�_�l��
	cout << endl;
	for(int i=0; i<=6; i++)
		cout << days[i] << '\t';	//��X�P�����Y
	cout << endl;	//���� 
	for(int j=1; j<=ini; j++)	//��X�ťհj��
		cout << setw(4) << '\t';
	for(int k=1; k<=max; k++)	//��X���j��
	{
		cout << setw(4) << k;	//�]�w��X�榡
		if((k+ini) % 7 != 0)	//�Y���O7������
			cout << '\t';	//���U�@�w���I
		else
			cout << '\n';	//���U�@�s��
	}
	cout << endl;	//���� 
    system("PAUSE");
    return EXIT_SUCCESS;
}
