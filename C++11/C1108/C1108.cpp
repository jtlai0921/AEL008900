#include <cstdlib>
#include <iostream>
using namespace std;

class TwoD		//﹚竡TwoD摸
{
protected:
	int x, y;
public:
	TwoD() {}	//TwoDぃ把计ミ
	TwoD(int m, int n) { x = m; y = n; }	//TwoD把计ミ
	void setx(int m) { x = m; }	//砞﹚xpublicㄧ计
	void sety(int n) { y = n; }	//砞﹚ypublicㄧ计
	int getx() { return x; }	//眔xpublicㄧ计
	int gety() { return y; }	//眔ypublicㄧ计
	void showxy() {
		cout << "キ畒夹 : p(" << x << ", " 
			<< y << ") " << endl;
	}
};

class ThreeD	//﹚竡ThreeD摸
{
protected:
	int z;
public:
	TwoD d;		//TwoD摸
	ThreeD(int m, int n, int o) {	//ThreeD 把计ミ
		d.setx(m); 	//硓筁d.setx()砞﹚x
		d.sety(n);	//硓筁d.sety()砞﹚y
		z = o;
	}
	void showxyz() {
		cout << "丁畒夹 : s(" 
			 << d.getx() << ", " 	//硓筁d.getx()眔x
			 << d.gety() << ", " 	//硓筁d.gety()眔y
			 << z << ") " << endl;
	}
};

int main(int argc, char *argv[])
{
	TwoD p(3, 4);	//ミTwoD摸ンp
	ThreeD s(3, 4, 5);	//ミThreeD摸ンs
	p.showxy();	//钡㊣TwoDΘ
	s.showxyz();	//钡㊣ThreeDΘ
	system("PAUSE");
	return EXIT_SUCCESS;
}
