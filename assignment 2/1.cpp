#include<iostream>
#include<cmath>
using namespace std;

class employee{
    private:
    int id;
    string name;
    double salary;
    double da;
    double it;
    double net_salary;
    int HRA=400;

    public:
    employee(int id, string name, double salary){
        this->id=id;
        this->name=name;
        this->salary=salary;
    }
    void calculate();
    void display();
};

void employee::calculate(){
    da=0.25*salary;
    it=0.15*salary;
    net_salary=salary+da+HRA-it;
}

void employee::display(){
    cout<<"Employee_ID:"<<id;
    cout<<"\nEmployee_Name:"<<name;
    cout<<"\nBasic_salary:"<<salary;
    cout<<"\nDA:"<<da;
    cout<<"\nHRA:"<<HRA;
    cout<<"\nI-tax:"<<it;
    cout<<"\nNet_Salary:"<<net_salary;
}

main(){
    employee e1(01, "Ram", 10000);
    e1.calculate();
    e1.display();
}