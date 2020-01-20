#include <cstdlib>
#include <iostream>
using namespace std;

class InchArea	//�ŧi��¦���O
{
protected:
	int inch;
public:
	InchArea(int in) {	//��¦���O�إߪ�
		inch = in;
	}
	int getLength() {	//getLength���
		return inch;
	}
	int getArea() {
		return (getLength()*getLength());
	}
};

class FeetArea: public InchArea	//�ŧi�l�����O
{
protected:
	int feet;
public:
	FeetArea(int ft): InchArea(ft*12) {	//��¦���O�إߪ�
		feet = ft;
	}
	int getLength() {	//�h��getLength���
		return feet;
	}
};

int main(int argc, char *argv[])
{
	InchArea ia(5);	//�إ߰�¦���O����ia
	cout << "����Ϊ� 5 �^�T, ���n = " << ia.getArea()
			<< " ����^�T" << endl;	//�I�s��¦���O��k

	FeetArea fa(8);	//�إ߭l�����O����fa
	cout << "����Ϊ� 8 �^�`, ���n = " << fa.getArea()
			<< " ����^�T" << endl;	//�I�s��¦���O��k
	system("PAUSE");
	return EXIT_SUCCESS;
}
