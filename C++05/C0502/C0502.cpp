#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	int count = 11, sum = 0;

	while (--count >= 1)	//�w�qwhile�j��
		sum += count;	//sum=sum+count
	cout << "10 + 9 + 8 + ... + 1 = " << sum	//��X�r��P�`�M
		 << endl;	//����
    system("PAUSE");
    return EXIT_SUCCESS;
}
