#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
	char sentence[81];	//�ŧi�r���ܼ�
	cout << "�п�J�r��G";	//��X�T���r��
	cin.getline(sentence, 81);	//���o��J�y�l
	cout << "��J�r��O�G" << sentence;	//��ܰT���P��J�y�l
	cout << endl;          //���� 
    system("PAUSE");
    return EXIT_SUCCESS;
}
