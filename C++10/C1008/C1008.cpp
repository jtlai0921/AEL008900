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
	Fracpri () {}	//�L�Ѽƫإߪ�
	Fracpri (int, int, int);	//���Ѽƫإߪ�
	int getgcd();	//�ŧi getgcd ���
	Fracpri operator ++();	//�ŧi�e�m ++x ��
	Fracpri operator ++(int);	//�ŧi��m x++ ��
	friend istream & operator >> (istream& in, Fracpri& obj);
	friend ostream & operator << (ostream& out, Fracpri& obj);
};

Fracpri::Fracpri(int a, int b, int c)	//�w�q�إߪ̨��
{
	whole = a; denom = b; numer = c;
}

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

Fracpri Fracpri::operator ++()	//�h���e�m ++x ��
{
	return Fracpri(++whole, denom, numer);
}

Fracpri Fracpri::operator ++(int)	//�h����m x++ ��
{
	return Fracpri(whole++, denom, numer);
}

istream & operator >> (istream & in, Fracpri & obj)
{					//�h�� >> �B��Ÿ�
	in >> obj.whole >> obj.numer >> obj.denom;
	obj.whole = abs(obj.whole);
	obj.numer = abs(obj.numer);
	obj.denom = abs(obj.denom);
	return in;
}

ostream & operator << (ostream& out, Fracpri& obj) 
{					//�h�� << �B��Ÿ�
	int gcd = obj.getgcd();
	obj.numer = obj.numer / gcd;
	obj.denom = obj.denom / gcd;
	out << obj.whole << ' ' << obj.numer << '/' << obj.denom;
	return out;
}

int main(int argc, char *argv[])
{
	Fracpri s1, s2, s3, s4;
	cout << "�п�J�a����1 (���-���l-����): ";
	cin >> s1;
	cout << "�п�J�a����2 (���-���l-����): ";
	cin >> s2;
	s3 = ++s1;	// s1=s1+1, s3=s1
	cout << "\ns3 = ++s1 = " << s3;
	cout << "\n�B��� s1 = " << s1 << endl;
	s4 = s2++;	// s4=s2, s2=s2+1
	cout << "\ns4 = s2++ = " << s4;
	cout << "\n�B��� s2 = " << s2 << endl;
	system("PAUSE");
	return EXIT_SUCCESS;
}
