#include<iostream>
using namespace std;
class Employee {
    protected:
    string empname;
    int empid;
    long long salary;
    public:
    void getdata(){
        cout<<"Enter Employee Name :";
        cin>>empname;
        cout<<"Enter Employee ID :";
        cin>>empid;
        
    }
    void showdata(){
        cout<<"Employee details ...\n";
        cout<<"Emp Name :";
        cout<<empname<<endl;
        cout<<"Emp ID :";
        cout<<empid<<endl;
        cout<<"Emp Salary :";
        cout<<salary<<endl;
        
    }



};
class Parttime : protected Employee{
    protected:
    int hh;
    double pay=300;
    public:
    void getdata(){
        Employee::getdata();
        cout<<"\nNo of Hours work :";
        cin>>hh;
        salary=hh*pay;
    }
    void showdata(){
        Employee::showdata();
    }
};
class Regular : protected Employee{
    protected:
    float hra=0.27;
    float da=0.15;
    long long bsalary;
    public:
    void getdata(){
        Employee::getdata();
        cout<<"\nEnter Basic Salary :";
        cin>>bsalary;
        salary=bsalary+bsalary*hra+bsalary*da;
    }
    void showdata(){
        Employee::showdata();
    }
};
int main()
{
    Parttime e1;
    e1.getdata();
    e1.showdata();
    Regular e2;
    e2.getdata();
    e2.showdata();
    
    return 0;
}
