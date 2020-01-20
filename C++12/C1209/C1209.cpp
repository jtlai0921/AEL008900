#include <cstdlib>
#include <iostream>
#define PI 3.1415925f
using namespace std;

class Line		//�w�q��H���O
{
private:
	int length;
public:
	Line(int length) { 	//�ŧiLine�إߪ�
		this->length = length;                        //�ܼ�length=�Ѽ�length
	}
	int getLength() {  	//�ŧi���olength��k
		return this->length;	//�Ǧ^�ܼ�length��
	}
	virtual double getArea() = 0;	//�ŧi�s�������
};

class Square: public Line
{
public:
	Square(int length): Line(length) {  	//�ŧiSquare�إߪ�
	}
	double getArea() {  	//�W��getArea()��k
		return getLength() * getLength(); 	//�Ǧ^����έ��n
	}
};

class Circle: public Line
{
public:
	Circle(int radius): Line(radius) {  	//�ŧiCircle�إߪ�
	}
	double getArea() {  	//�W��getArea()��k
		return PI * (double(getLength()) * double(getLength())); 	//�Ǧ^��έ��n
	}
};

int main(int argc, char *argv[])
{
	Square squ(5);	//�إ�Square����squ
	Circle cir(10);	//�إ�Circle����cir
	cout << "�������� = " << squ.getLength();	//�I�sSquare����k
	cout << "\t����έ��n = " << squ.getArea();	//�I�sSquare����k
	cout << "\n��Υb�| = " << cir.getLength();	//�I�sSquare����k
	cout << "\t��έ��n = " << cir.getArea();	//�I�sCircle����k
	cout << endl;
	system("PAUSE");
	return EXIT_SUCCESS;
}
