#include <cstdlib>
#include <iostream>
using namespace std;

class Employee
{
	int EmpId;
	char name[20];
public:
	void inputEmp();
	void outputEmp() const;	//盽计ㄧ计
};

void Employee::inputEmp()	//﹚竡盽计inputEmpㄧ计
{
	cout << "EmpId:";
	cin >> EmpId;
	cout << "EmpName:";
	cin >> name;
}

void Employee::outputEmp() const	//﹚竡盽计outputEmp
{
	cout << EmpId << '\t';
	cout << name << endl;
}

int main(int argc, char *argv[])
{
	Employee emp1;	//ミ礚把计ン
	emp1.inputEmp();	//㊣inputEmpΘㄧ计
	cout << "\nID\tEmpName\n";
	cout << "---\t-------\n";
	emp1.outputEmp();	//㊣outputEmpㄧ计
	system("PAUSE");
	return EXIT_SUCCESS;
}
