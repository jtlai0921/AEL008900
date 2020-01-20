#include <cstdlib>
#include <iostream>
#include <cmath>
using namespace std;

class Fracpri	// Fracpri 摸
{
private:
	int whole;	//俱计
	int numer;	//だ
	int denom;	//だダ
public:
	int getgcd();	// getgcd ㄧ计
	friend istream & operator >> (istream& in, Fracpri& obj); 
	friend ostream & operator << (ostream& out, Fracpri& obj);
};

int Fracpri::getgcd()	//― G.C.D ㄧ计
{
	int max = denom, min = numer;
	int rmd = min;
	while (rmd != 0) {
		rmd = max % min;
		if (rmd == 0) {break;}
		max = min;
		min = rmd;
	}
	return min;
}

istream & operator >> (istream & in, Fracpri & obj)	//更>>才腹ㄧ计
{
	in >> obj.whole >> obj.numer >> obj.denom;
	obj.whole = abs(obj.whole);
	obj.numer = abs(obj.numer);
	obj.denom = abs(obj.denom);
	return in;
}

ostream & operator << (ostream& out, Fracpri& obj)	//更<<才腹ㄧ计
{ 
	int gcd = obj.getgcd();
	obj.numer = obj.numer / gcd;
	obj.denom = obj.denom / gcd;
	out << obj.whole << ' ' << obj.numer << '/' << obj.denom;
	return out;
}

int main(int argc, char *argv[])
{
	Fracpri s1;
	cout << "叫块盿だ计 (俱计-だ-だダ): ";
	cin >> s1;
	cout << "て虏盿だ计" << s1 << endl;
	system("PAUSE");
	return EXIT_SUCCESS;
}
