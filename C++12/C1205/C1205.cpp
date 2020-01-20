#include <cstdlib>
#include <iostream>
using namespace std;

class Base
{
public:
	void show() {cout << "��¦���O\n";};	//�ŧiBase::show()
};

class Derived1: public Base
{
public:
	void show() {cout << "�l�����O1\n";}	//�ŧiDerived1::show()
};

class Derived2: public Base
{
public:
	void show() {cout << "�l�����O2\n";} 	//�ŧiDerived2::show()
};

int main(int argc, char *argv[])
{
	Base b;
	Derived1 d1;
	Derived2 d2;
	Base *ptr;
	ptr = &b;	//����ptr���Vb
	ptr->show();	//���"��¦���O"
	ptr = &d1;	//����ptr���Vd1
	ptr->show();	//���"��¦���O"
	ptr = &d2; 	//����ptr���Vd2
	ptr->show();	//���"��¦���O"
	system("PAUSE");
	return EXIT_SUCCESS;
}
