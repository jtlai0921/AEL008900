#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	const int max = 5;	//�ŧi�`�ƲŸ�
	int counti, countj, buffer;	//�ŧi����ܼ�
	int search, low = 0, high = max-1, middle;	//�ŧi����ܼ�
	int number[max] = {57, 19, 33, 92, 6};	//�ŧi��ư}�C
	cout << "�Ƨǫe�G";	//��ܱƧǫe����
	for (counti = 0; counti < max; counti++)
		cout << number[counti] << '\0';
	cout << "\n�п�J�n�j�M�ƭȡG"; cin >> search;	//��J�j�M��
	for (counti = 0; counti < max-1; counti++)	//�Ƨǰj��
		for (countj = counti; countj < max; countj++)
			if (number[counti] > number[countj])
			{
				buffer = number[counti];
				number[counti] = number[countj];
				number[countj] = buffer;
			}
	cout << "\n�Ƨǫ�G";	//��ܱƧǫᤧ��
	for (counti = 0; counti < max; counti++)
		cout << number[counti] << '\0';
	do				//�j�M�j��
	{
		if ((low + high) % 2 > 0.5)	//�p��j�M��m
			middle = (low + high) / 2 + 1;
		else
			middle = (low + high) / 2;

		if (search < number[middle])	//�p��j�M�W��
			high = middle - 1; 
		else if (search > number[middle])	//�p��j�M�U��
			low = middle + 1;
		else if (search == number[middle])	//���۲żƭ�
			break;
	} while (low <= high);
	if (low > high)	//��ܷj�M���G
		cout << "\n�䤣��ƭȡG" << search << endl;
	else
		cout << "\n���ƭȡG" << search << endl;
	system("PAUSE");
	return EXIT_SUCCESS;
}
