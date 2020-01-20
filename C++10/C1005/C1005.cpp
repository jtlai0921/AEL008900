#include <cstdlib>
#include <iostream>
#include <cmath>
using namespace std;

class Fracpri	//�ŧi Fracpri ���O
{
private:
	int whole;	//���
	int numer;	//���l
	int denom;	//����
public:
	int getgcd();	//�ŧi getgcd ���
	friend istream & operator >> (istream& in, Fracpri& obj); 
	friend ostream & operator << (ostream& out, Fracpri& obj);
};

int Fracpri::getgcd()	//�D G.C.D ���
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

istream & operator >> (istream & in, Fracpri & obj)	//�h��>>�Ÿ����
{
	in >> obj.whole >> obj.numer >> obj.denom;
	obj.whole = abs(obj.whole);
	obj.numer = abs(obj.numer);
	obj.denom = abs(obj.denom);
	return in;
}

ostream & operator << (ostream& out, Fracpri& obj)	//�h��<<�Ÿ����
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
	cout << "�п�J�a���� (���-���l-����): ";
	cin >> s1;
	cout << "��²�᪺�a���Ƭ��G" << s1 << endl;
	system("PAUSE");
	return EXIT_SUCCESS;
}
