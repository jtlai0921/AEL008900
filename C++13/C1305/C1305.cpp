#include <cstdlib>
#include <iostream>	//C++���Aiostream���D��
#include <string>	//C++���Astring���D��
using namespace std;
void sortArray(string array[]);

int main(int argc, char *argv[])
{
	string s1[] = {"Java", "Assembly", "Delphi",
		       "Basic", "Fortran", "Cobol"};	//�ŧi�r��}�C
	cout << "�Ƨǫe�G";	//��ܱƧǫe���
	for (int i=0; i<5; i++)
		cout << s1[i] << '\0';
	sortArray(s1);	//�ǻ�s1��sortArray
	cout << "\n�Ƨǫ�G";	//��ܱƧǫ���
	for (int j=0; j<5; j++)
		cout << s1[j] << '\0';
	cout << endl;
	system("PAUSE");
	return EXIT_SUCCESS;
}

void sortArray(string array[])	//��w�ƧǨ��
{
	string buffer;	//�ŧi�w�ľ��ܼ�
	for (int i=0; i<4; i++)	//�Ƨǥ~�j��
		for (int j=i; j<5; j++)	//�ƧǤ��j��
			if (array[i] > array[j])	//�Y���n�h���
			{
				buffer = array[i];
				array[i] = array[j];
				array[j] = buffer;
			}
}
