#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	int count = 10, sum = 0;

	do
		sum += count;	//sum=sum+count
	while (--count >= 1);	//�]�wwhile����
	cout << "10 + 9 + 8 + ... + 1 = " << sum	//��X�r��P�`�M
		 << endl;	//����
    system("PAUSE");
    return EXIT_SUCCESS;
}
