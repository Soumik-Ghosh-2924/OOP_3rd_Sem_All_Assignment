#include<iostream>
using namespace std;
class student {
    protected:
    string name;
    int rollno;
    int age;
    public:
        void getdata(string name,int rollno,int age){
            this->name=name;
            this->age=age;
            this->rollno=rollno;
        }
        void showdata(){
            cout<<"Student Details ...\n";
            cout<<"Name: "<<name<<endl;
            cout<<"Roll No: "<<rollno<<endl;
            cout<<"Age: "<<age<<endl;
        }
};
class test : protected student{
    protected :
    int P,C,M,E,CS;
    public:
    void getdata(){
        cout<<"Enter Name:";
        cin>>name;
        cout<<"Enter Rollno:";
        cin>>rollno;
        cout<<"Age:";
        cin>>age;
        cout<<"Enter Physics,Chemistry,Maths,English & CS marks :";
        cin>>P>>C>>M>>E>>CS;
        student::getdata(name,rollno,age);
    }
    void showdata(){
        student::showdata();
        cout<<"Displaying Marks...\n";
        cout<<"Physics :"<<P<<endl;
        cout<<"Chemistry :"<<C<<endl;
        cout<<"Maths :"<<M<<endl;
        cout<<"English :"<<E<<endl;
        cout<<"Computer Science :"<<CS<<endl;
        
    }
};

class sports {
    protected :
    int PE;
    public:
    void getdata(){
        cout<<"\nEnter Sports Activity'Marks:"<<endl;
        cin>>PE;
    }
    void showdata(){
        cout<<"\nSport's Activity Marks :"<<PE<<endl;
        
        
    }
};
class result : protected sports,protected test{
    protected :
    int tmarks;
    float percent;
    public:
    void getdata(){
        test::getdata();
        sports::getdata();
        tmarks=P+C+M+E+CS+PE;
        percent=(float)tmarks/(100*6);
    }
    void showdata(){
        test::showdata();
        sports::showdata();
        cout<<"\nAcademics Details ...\n";
        cout<<"Total Marks:"<<tmarks<<endl;
        cout<<"Total Percentage :"<<percent*100<<endl;
        
    }
};
int main()
{
    result t1;
    t1.getdata();
    t1.showdata();
    // result t2;
    // t2.getdata();
    // t2.showdata();
    return 0;
}
