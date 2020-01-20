#include <cstdlib>
#include <iostream>
using namespace std;
int total(int);	//ㄧ计

int main(int argc, char *argv[])	//ㄧ计main 
{
	int count, oddsum;	//跋办跑计
	for (count = 1; count <= 100; count += 2)	//㊣ㄧ计癹伴
		oddsum = total(count);	//oddsum=ㄧ计肚
	cout << "1+3+5+...+99=" << oddsum;	//陪ボ程oddsum
	cout << endl;
	system("PAUSE");
	return EXIT_SUCCESS;
}

int total(int n)	//璸衡羆㎝ㄧ计
{
	static int sum;	//繰篈跑计
	sum += n;	//sum(n+1)=sum(n)+n
	return sum;	//肚sum
}
