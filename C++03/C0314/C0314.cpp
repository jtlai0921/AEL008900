#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
	unsigned seed;	//unsigned int seed;
	cout << "�п�J�ؤl�ơG";
	cin >> seed;	//��J�ؤl��
	srand(seed);	//�]�w�üƺؤl��
	cout << rand() << endl;	//��X�ü�
	cout << rand() << endl;	//��X�ü�
	cout << rand() << endl;	//��X�ü�
    system("PAUSE");
    return EXIT_SUCCESS;
}
