#ifndef _PAYSLIP
#define _PAYSLIP
#include <string>
#include "employee.h"
using namespace std;

class Payslip : public Employee {
    private: 
        double mOvertimePay, mGrossPay , mNetPay, mWithholdingTax;
        double SSS= 500.00,
               PagIbig =200.00,
               Philhealth =100.00;
    public:
        void setInformation(string name, double bSalary ,int oTHours);
        double getOvertimePay() const;
        double getmGrossPay () const;
        double getmNetPay() const;
        double getWithholdingTax() const;
        double getFixedValues() const;
        double getTaxRate() const;
        void printData() const;
        Payslip();
        Payslip(string name, double bSalary ,int oTHours);
};
void Payslip :: setInformation(string name, double bSalary ,int oTHours){
    Employee :: setInformation (name, bSalary, oTHours);
    
}
double Payslip :: getOvertimePay() const{
    return getOvertimeHours() *(0.1 * getBasicSalary());  
}
double Payslip::getmGrossPay() const{
    return getBasicSalary() + getOvertimePay();
}
double Payslip :: getmNetPay() const{
    return getmGrossPay() - getWithholdingTax() -getFixedValues();
}
double Payslip::getWithholdingTax() const{
    return getmGrossPay() * getTaxRate();
}
double Payslip :: getFixedValues() const{
    return SSS + PagIbig + Philhealth;
} 
double Payslip :: getTaxRate() const{
    if (getBasicSalary() >= 10000 && getBasicSalary() < 20000){
        return 0.1;
    }else if (getBasicSalary() >= 20000 && getBasicSalary()  < 30000){
        return 0.15;
    }else if (getBasicSalary() >= 30000 && getBasicSalary() < 40000){
        return 0.2;
    }else if (getBasicSalary() >= 40000 && getBasicSalary() < 50000){
        return 0.25;
    }else if (getBasicSalary() >= 50000){
        return 0.3;
    }
}
void Payslip::printData() const{
    Employee::printData();
    cout << "OT Pay         : PHP " << getOvertimePay() <<endl;
    cout << "Gross Pay      :PHP  "  << getmGrossPay() <<endl;
    cout << "Withodling Tax : PHP " << getWithholdingTax() <<endl;
    cout << "Net Pay        : PHP " << getmNetPay() <<endl;
} 
Payslip::Payslip(){ }
Payslip::Payslip(string name, double bSalary , int oTHours)
: Employee(name,bSalary,oTHours) { }
 #endif;
