#include <iostream>
using namespace std;

class student
{

        char  name[30];
        int   rollno;
        int   marks;
    public:
        //member function to get student's details
        void getData();
        //member function to print student's details
        void Display();
};

void student::getData()
{       // for taking input from user
	cout<<"enter name :";
	cin>>name;
	cout<<"enter rollno :";
	cin>>rollno;
	cout<<"enter marks :";
	cin>>marks;
	
}

void student::Display(){      //for printing the outputs
   cout<<"\n name is :"<<name;
   cout<<"\n rollno is:"<<rollno;
   cout<<"\n marks is:"<<marks;
   
}

int main(){
	student s;
	s.getData();
	s.Display();
}
