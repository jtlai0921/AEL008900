#include <cstdlib>
#include <iostream>
using namespace std;

class Employee
{
	int EmpId;
	char name[20];
public:
	void inputEmp();
	void outputEmp() const;	//�ŧi�`�ƨ�ƭ쫬
};

void Employee::inputEmp()	//�w�q�`��inputEmp���
{
	cout << "EmpId:";
	cin >> EmpId;
	cout << "EmpName:";
	cin >> name;
}

void Employee::outputEmp() const	//�w�q�`��outputEmp
{
	cout << EmpId << '\t';
	cout << name << endl;
}

int main(int argc, char *argv[])
{
	Employee emp1;	//�إߵL�Ѽƪ���
	emp1.inputEmp();	//�I�sinputEmp�������
	cout << "\nID\tEmpName\n";
	cout << "---\t-------\n";
	emp1.outputEmp();	//�I�soutputEmp���
	system("PAUSE");
	return EXIT_SUCCESS;
}