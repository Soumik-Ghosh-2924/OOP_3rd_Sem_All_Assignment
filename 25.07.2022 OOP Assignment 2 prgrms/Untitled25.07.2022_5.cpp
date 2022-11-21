#include <iostream>
using namespace std;

class student
{

        char  name[30];
        int   rollno;
        int   mark[10];
    public:
        //member function to get student's details
        void getData();
        //member function to print student's details
        void Display();
        void Percentage();
};

void student::getData()
{       // for taking input from user
	cout<<"enter name :"<<endl;
	cin>>name;
	cout<<"enter rollno :"<<endl;
	cin>>rollno;
	cout<<"enter marks :"<<endl;
	for(int i=0;i<10;i++)
	{
		cin>>mark[i];
	}
}

void student::Display(){      //for printing the outputs
   cout<<"\n name is :"<<name<<endl;
   cout<<"\n rollno is:"<<rollno<<endl;
   cout<<"\n marks are:"<<endl;
   for(int i=0;i<10;i++)
	{
		cout<<mark[i]<<endl;
	}
    cout<<endl;
}
void student :: Percentage()
{
	int sum =0;
	float perc, total=1000.0;
	for(int i=0;i<10;i++)
	{
		sum+=mark[i];
	}
	perc=(sum/total)*100.0;
	
	cout<<"Percentage : "<<perc<<endl;
}
int main(){
	student s1;
	s1.getData();
	s1.Display();
	s1.Percentage();
	return 1;
}
