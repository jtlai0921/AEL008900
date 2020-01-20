#include <cstdlib>
#include <iostream>
using namespace std;

class InchArea	//宣告基礎類別
{
protected:
	int inch;
public:
	InchArea(int in) {	//基礎類別建立者
		inch = in;
	}
	int getLength() {	//getLength函數
		return inch;
	}
	int getArea() {
		return (getLength()*getLength());
	}
};

class FeetArea: public InchArea	//宣告衍生類別
{
protected:
	int feet;
public:
	FeetArea(int ft): InchArea(ft*12) {	//基礎類別建立者
		feet = ft;
	}
	int getLength() {	//多載getLength函數
		return feet;
	}
};

int main(int argc, char *argv[])
{
	InchArea ia(5);	//建立基礎類別物件ia
	cout << "正方形長 5 英吋, 面積 = " << ia.getArea()
			<< " 平方英吋" << endl;	//呼叫基礎類別方法

	FeetArea fa(8);	//建立衍生類別物件fa
	cout << "正方形長 8 英呎, 面積 = " << fa.getArea()
			<< " 平方英吋" << endl;	//呼叫基礎類別方法
	system("PAUSE");
	return EXIT_SUCCESS;
}
