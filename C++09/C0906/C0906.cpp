#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;

class Booklist	//宣告Booklist類別
{
	char title[80];	//Booklist第1成員變數
	char auther[20];	//Booklist第2成員變數
	char number[20];	//Booklist第3成員變數
	float price;	//Booklist第4成員變數
public:
	void setBook(void) { 	//輸入圖書資料函數
		cout << "請輸入書名：";
		cin.getline(title, 79);	//輸入第1成員資料
		cout << "請輸入作者：";
		cin.getline(auther, 19);	//輸入第2成員資料
		cout << "請輸入書號：";
		cin.getline(number, 19);	//輸入第3成員資料
		cout << "請輸入定價：";
		cin >> price;	//輸入第4成員資料
		cout << endl;
	}
	void showBook() {	//輸出圖書資料函數
		cout.precision(2);	//設定數值的有效位數
		cout.setf(ios::fixed|ios::left);	//固定小數2位數,向左對齊
		cout << setw(30) << title;	//輸出b第1成員資料
		cout << setw(8) << auther;	//輸出b第2成員資料
		cout << setw(9) << number;	//輸出b第3成員資料
		cout << price << '\n';	//輸出b第4成員資料
	}
};

int main(int argc, char *argv[])
{
	Booklist book[3]; 	//建立Booklist型態陣列
	for(int i=0; i<3; i++)	//輸入Booklist資料迴圈
	{
		book[i].setBook();	//呼叫物件setBook函數
		cin.ignore();	//忽略最後一個輸入字元
	}
	cout << "書名\t\t\t\t作者\t書號\t定價\n";
	for(int j=0; j<3; j++)	//輸出圖書資料迴圈
	{
		book[j].showBook();	//呼叫物件showBook函數
	}
	system("PAUSE");
	return EXIT_SUCCESS;
}
