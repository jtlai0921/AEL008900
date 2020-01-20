#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	int intVar = 500;	//intVar=500
	short shortVar = short(intVar);	//shortVar=-12
	cout << "intVar = " << intVar << endl;
	cout << "shortVar = short(intVar) = " << shortVar << endl;

	short shortLet = 65;	//shortLet=65
	char charLet = char(shortLet);	//charLet='A'
	cout << "shortLet = " << shortLet << endl;
	cout << "charLet = " << charLet << endl;

	float floatNum = 70000.0f;	//floatNum=70000.0
	int intNum = int(floatNum);	//intNum=70000
	short shortNum = short(floatNum);	//shortNum=32767
	cout << "floatNum = " << floatNum << endl;
	cout << "intNum = int(floatNum) = " << intNum << endl;
	cout << "shortNum = short(floatNum) = " << shortNum << endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}
