#include <cstdlib>
#include <iostream>	//C++���Aiostream���D��
#include <string>	//C++���Astring���D��
using namespace std;	//�ŧi�ϥ�C++���A���D��

int main(int argc, char *argv[])
{
	string s1, s2, s3;	//�ŧi�r��s1, s2, s3

	cout << "�п�J�@�r��G";
	getline ( cin, s1 );	//���o��C�r��

	int len1 = s1.length( );	//���os1�r�����
	int count = 0;

	for ( int i = 0; i < len1; i++ ) {
		// ���o��r
		if ( isalnum( s1.at(i) ) ) {	//�Y�O�^��μƦr
			s2 += s1.at( i );	//�N�r���s����s2
			if ( i != ( len1-1 ) )	//�Y������̫�r��
				continue;	//�^��j��Ĥ@�ӱԭz
		}

		// �ˬd��٦r
		bool flag = true;
		int len2 = s2.length( );	//���os2�r�����
		for ( int j = 0; j <= ( len2 / 2 - 1 ); j++ ) {
			if ( s2.at( j ) != s2.at ( len2 - j - 1 ) ) 
			{		//�ˬd�O�_����٦r
				flag = false;
				break;
			}
		}

		// ��ܹ�٦r
		if ( flag == true ) {
			cout << '\"' << s2 << "\" �O��٦r" << endl;
			count ++;
		}
		s2 = s3;
	}
	cout << "\n��٦r���`�Ƭ� " << count << "\n";
	system("PAUSE");
	return EXIT_SUCCESS;
}
