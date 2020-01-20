#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
	char ps[9] = "year2011";
	char str[9];
	cout << "½Ð¿é¤J±K½X¡G";
	cin >> str;
	try {
		for(int i=0; i<9; i++)
			if (str[i] != ps[i])
				throw i;
		cout << "±K½X¥¿½T¡I\n";
	}
	catch(int i)
	{
		cout << "±K½X¿ù»~¡I\n";
	}
	system("PAUSE");
	return EXIT_SUCCESS;
}
