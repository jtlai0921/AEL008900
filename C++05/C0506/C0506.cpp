#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[])
{
	int outer = 0;	//�~�h�j��p�ƭ�
	while (outer++ <= 4)	//�~�hwhile����
	{
		int inner = 0;	//���h�j��p�ƭ�
		while (inner++ < outer) 	//���hwhile����
		{
			cout << setw(3) << inner;	//��Xinner��
		} //end of inner
		cout << endl;
	} //end of outer
    system("PAUSE");
    return EXIT_SUCCESS;
}
