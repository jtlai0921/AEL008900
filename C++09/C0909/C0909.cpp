#include <cstdlib>
#include <iostream>
using namespace std;

class Oddsum
{
	static int sum;	//繰篈戈Θ
public:
	static void addition(int n);	//繰篈Θㄧ计
	void display();	//块戈ㄧ计
};

int Oddsum::sum = 0;	//癬﹍繰篈戈Θ

void Oddsum::addition(int n) {	//﹚竡繰篈Θㄧ计
	sum += n;	//sum(n+1)=sum(n)+n
}

void Oddsum::display() {	//﹚竡块戈Θㄧ计
	cout << "sum = " << sum << endl;
}

int main(int argc, char *argv[])
{
	Oddsum a;
	for (int count = 1; count <= 100; count += 2)	//㊣ㄧ计癹伴
		a.addition(count);	//㊣additionㄧ计
	a.display();	//㊣displayㄧ计
	system("PAUSE");
	return EXIT_SUCCESS;
}
