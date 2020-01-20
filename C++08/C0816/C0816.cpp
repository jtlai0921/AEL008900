#include <cstdlib>
#include <iostream>

using namespace std;
void sortArray(const int *, int *);	//宣告函數原型

int main(int argc, char *argv[])
{
	const int SIZE = 5;	//宣告整常數符號
	int number[SIZE] = {57, 19, 33, 92, 6};	//宣告一維陣列

	cout << "排序前：";	//顯示排序前資料
	for (int counti = 0; counti < SIZE; counti++)
		cout << number[counti] << '\0';

	sortArray(&SIZE, number);	//傳number給sortArray

	cout << "\n排序後：";	//顯示排序後資料
	for (int countj=0; countj<SIZE; countj++)
		cout << number[countj] << '\0';
	cout << endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}

void sortArray(const int *MAX, int *array)	//選擇排序函數
{
	int minimum, mindex;	//宣告緩衝器變數
	for (int counti=0; counti<*MAX-1; counti++)	//排序外迴圈
	{
		mindex = counti;	//mindex=最小值索引
		minimum = *(array+counti);	//minimum=最小值
		for (int countj=counti+1; countj<*MAX; countj++)	//排序內迴圈
		{
			if (*(array+countj) < minimum)        //若*(array+countj)<最小值
			{
				minimum = *(array+countj);	//minimum=新最小值
				mindex = countj;	//mindex=新最小值索引
			}
		}
		*(array+mindex) = *(array+counti);      //*(array+最小值索引)=較大值
		*(array+counti) = minimum;                //*(array+counti)=最小值
	}
}
