#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
	srand(time(NULL));	//�H�ɶ���Ƭ��ؤl��
	cout << 1 + rand() % (10 - 1 + 1) << endl;	//��X1-10�������ü�
	cout << 1 + rand() % (10 - 1 + 1) << endl;	//��X1-10�������ü�
	cout << 1 + rand() % (10 - 1 + 1) << endl;	//��X1-10�������ü�
    system("PAUSE");
    return EXIT_SUCCESS;
}
