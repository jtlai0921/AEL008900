#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	int source[3] = {5, 9, 3};	//�ŧi�@���}�C�ܼ�
	cout << "��X�}�C����\n";
	for (int i=0; i<=2; i++)	//��X�}�C�����j��
	{
		cout << "source[" << i << "] = ";	//��X�}�C���ޭ�
		cout << source[i] << '\t';	//��X�}�C����
	}
	cout << endl;         //���� 
	system("PAUSE");
	return EXIT_SUCCESS;
}
