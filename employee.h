#ifndef _EMPLOYEE
#define _EMPLOYEE
#include <string>
#include <iomanip>
#include <iostream>

using namespace std;


class Employee{
    private:
    string mName , mPayGrade;
    double mBasicSalary;
    int mOvertimeHours;
    
    public:
        void setInformation(string name, double bSalary , int oTHours);
        string getName() const;
        double getBasicSalary() const;
        int getOvertimeHours() const;
        string getPayGrade () const;
        void printData() const;
        Employee();
        Employee (string name, double bSalary, int oTHours);

};
void  Employee :: setInformation(string name, double bSalary , int oTHours)
{
    mName = name;
    mBasicSalary =bSalary;
    mOvertimeHours =oTHours;
    if (mBasicSalary >= 10000 && mBasicSalary < 15000 || mBasicSalary >= 20000 && mBasicSalary < 25000 ||
        mBasicSalary >= 30000 && mBasicSalary < 35000 || mBasicSalary >= 40000 && mBasicSalary < 45000 ||
        mBasicSalary >= 50000 && mBasicSalary < 55000 ){
            mPayGrade = "A";
        }else if (mBasicSalary >= 15000 && mBasicSalary < 20000 || mBasicSalary >= 25000 && mBasicSalary < 30000 ||
                    mBasicSalary >= 35000 && mBasicSalary < 40000 || mBasicSalary >= 45000 && mBasicSalary < 50000 ||
                    mBasicSalary >= 55000){
                    mPayGrade = "B";
                    } 

}
string Employee :: getName() const {
    return this->mName;
}
double Employee :: getBasicSalary() const{
    return this->mBasicSalary;
}
int Employee :: getOvertimeHours() const{
    return this-> mOvertimeHours;
}
string Employee :: getPayGrade() const{
    return this ->mPayGrade;
}
void Employee :: printData() const{
    cout << "* EMPLOYEE DETAILS *" << endl;
    cout << "Employee Name     : " <<mName<<endl;
    cout << "Basic Salary      : " <<mBasicSalary << endl;
    cout << "Pay Grade         : " << mPayGrade <<endl;
    cout << "No. of OT HOURS   : " <<mOvertimeHours<<endl;
}
Employee :: Employee() {
    mName = "none";
    mBasicSalary = 0;
    mOvertimeHours =0;
    mPayGrade = "None";
}
Employee :: Employee(string name, double bSalary, int oTHours){
    setInformation(name, bSalary ,oTHours);
}
 #endif;

