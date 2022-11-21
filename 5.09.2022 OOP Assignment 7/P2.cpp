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
    int H,G,M,E,MS;
    public:
    void getdata(){
        cout<<"Enter Name:";
    	// cin>>name;
    	getline(cin,name);
        cout<<"Enter Rollno:";
        cin>>rollno;
        cout<<"Age:";
        cin>>age;
        cout<<"Enter History,Geography,Maths,English & Moral Science  marks :";
        cin>>H>>G>>M>>E>>MS;
        student::getdata(name,rollno,age);
    }
    void showdata(){
        student::showdata();
        cout<<"Displaying Marks...\n";
        cout<<"History :"<<H<<endl;
        cout<<"Geography :"<<G<<endl;
        cout<<"Maths :"<<M<<endl;
        cout<<"English :"<<E<<endl;
        cout<<"Moral Science :"<<MS<<endl;
        
    }
};
int main()
{
    test T;
    T.getdata();
    T.showdata();
    return 0;
}
