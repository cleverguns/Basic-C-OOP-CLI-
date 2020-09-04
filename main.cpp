#include <cstdio>
#include <cstdlib>
#include <string>
#include <iostream>

#include "employee.h"
#include "payslip.h"


using namespace std;

int main () {
	string eName;
	double eSalary;
	int eOTHours;

	cout << "Enter Name : ";
	getline (cin, eName);
	cout << "Enter Salary :";
	cin >> eSalary;
	cout << "Enter Overtie Hour : ";
	cin >> eOTHours;

	
	cout << endl;

	Payslip	 myPay(eName, eSalary, eOTHours);

	
	myPay.printData();
 





	return 0;
}
