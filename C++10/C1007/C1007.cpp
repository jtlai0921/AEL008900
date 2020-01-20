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
	bool operator > (Fracpri);	// > 笲衡才腹
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

bool Fracpri::operator > (Fracpri obj)	//更 > 笲衡才腹
{
	int numer1, numer2;
	numer1 = whole * denom + numer;
	numer2 = obj.whole * obj.denom + obj.numer;
	if((numer1*obj.denom) > (numer2*denom))
		return true;
	else
		return false;
}

istream & operator >> (istream & in, Fracpri & obj)
{					//更 >> 笲衡才腹
	in >> obj.whole >> obj.numer >> obj.denom;
	obj.whole = abs(obj.whole);
	obj.numer = abs(obj.numer);
	obj.denom = abs(obj.denom);
	return in;
}

ostream & operator << (ostream& out, Fracpri& obj)
{					//更 << 笲衡才腹
	int gcd = obj.getgcd();
	obj.numer = obj.numer / gcd;
	obj.denom = obj.denom / gcd;
	out << obj.whole << ' ' << obj.numer << '/' << obj.denom;
	return out;
}

int main(int argc, char *argv[])
{
	Fracpri s1, s2;
	cout << "叫块盿だ计1 (俱计-だ-だダ): ";
	cin >> s1;
	cout << "叫块盿だ计2 (俱计-だ-だダ): ";
	cin >> s2;
	if (s1 > s2)	//㊣ ! 籔 > ㄧ计
		cout << "盿だ计1 (" << s1 << ") > " 
			<< "盿だ计2 (" << s2 << ')' << endl;
	else
		cout << "盿だ计1 (" << s1 << ") <= " 
			<< "盿だ计2 (" << s2 << ')' << endl;
	system("PAUSE");
	return EXIT_SUCCESS;
}
