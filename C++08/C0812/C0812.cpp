#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
	char *array[] = {"�ɫe������A",
				         "�æ��a�W���F",
				         "�|�Y�����A",
				         "�C�Y��G�m�C"};	//�ŧi�}�C����
	int size = (sizeof array)/(sizeof array[0]);	//�p��}�C�Ӽ�
	for (int i=0; i<size; i++)	//��ܰ}�C����
	{
		cout << *(array+i) << endl;
	}
    system("PAUSE");
    return EXIT_SUCCESS;
}
