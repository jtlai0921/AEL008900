#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
	char str1[] = "Focus on giving";	//�ŧi�r���ܼ�
	char* pstr2 = "Instead of getting";	//�ŧi�r�����
	cout << "��X�ܼƵ��ȡG" << str1 << endl;	//��ܦr���ܼƭ�
	cout << "��X���Ф��ȡG" << pstr2 << endl;	//��ܫ��Цܵ���
	cout << "��X�r�ꤸ���G" << str1[9] << endl;	//��ܲ�9������
	cout << "��X�������СG" << pstr2 + 11 << endl;	//��ܲ�11�ܵ���

    system("PAUSE");
    return EXIT_SUCCESS;
}
