#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[])
{
	int outer = 1;	//�ŧi�~�h�j��p�ƭ�
	do
	{				//�~�hwhile�j��_�I
		int inner = 1;	//�ŧi���h�j��p�ƭ�
		do
		{			//���hwhile�j��_�I
			cout << setw(3) << inner;	//��X�B���
		} while (inner++ <= 5-outer); 	//���hwhile����
		cout << endl;
	} while (outer++ <= 4);	//�~�hwhile����
    system("PAUSE");
    return EXIT_SUCCESS;
}
