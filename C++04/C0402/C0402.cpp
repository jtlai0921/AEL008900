#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	int number;
	cout << "�п�J�@�Ӿ�ơG";
	cin >> number;	//��J�r���æs�Jnumber
	if (number >= 0) {	//�Ynumber >= 0
		cout << number << " �O����ơC\n";	//  ��ܰT��
	}				//if�϶������I
	else {		//�Ynumber < 0
		cout << number << " �O�t��ơC\n";	//  ��ܰT��
	}				//else�϶������I
    system("PAUSE");
    return EXIT_SUCCESS;
}
