#include <cstdlib>
#include <iostream>
using namespace std;
void showArray(int [], int []);	//�ŧi��ƭ쫬

int main(int argc, char *argv[])
{
	int source[3] = {5, 9, 3};	//�ŧi�ð_�lsource�}�C
	int target[3];	//�ŧitarget�}�C
	cout << "�ƻs�e\n";
	showArray(source, target);	//�I�sshowArray���
	for (int j=0; j<=2; j++)	//�ƻs�j��
	{
		target[j] = source[j];	//�ƻssource��target
	}
	cout << "\n�ƻs��\n";
	showArray(source, target);	//�I�sshowArray���
	for (int k=0; k<=2; k++)	//�M���j��
	{
		target[k] = 0;	//�M��target
	}
	cout << "\n�M��target��\n";
	showArray(source, target);	//�I�sshowArray���
	system("PAUSE");
	return EXIT_SUCCESS;
}

void showArray(int s[], int t[])
{
	for (int i=0; i<=2; i++)	//��X�j��
	{
		cout << "source[" << i << "] = " << s[i] << '\t';	//��Xs[i]��
		cout << "target[" << i << "] = " << t[i] << endl;	//��Xt[i]��
	}
}
