#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
	char ps[9] = "year2011";
	char str[9];
	cout << "�п�J�K�X�G";
	cin >> str;
	try {
		for(int i=0; i<9; i++)
			if (str[i] != ps[i])
				throw i;
		cout << "�K�X���T�I\n";
	}
	catch(int i)
	{
		cout << "�K�X���~�I\n";
	}
	system("PAUSE");
	return EXIT_SUCCESS;
}
