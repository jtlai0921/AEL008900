#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
	int *p = new int[10];	//����int p[10];
	int i;
	for(i=0; i<10; i++)
		p[i] = i;	//�_�l�}�C���

	cout << "��X�}�C�����ȡG";
	for(i=0; i<10; i++)
		cout << p[i] << ' ';	//��X�}�C������
	delete [] p;	//����}�C�O����
	system("PAUSE");
	return EXIT_SUCCESS;
}
