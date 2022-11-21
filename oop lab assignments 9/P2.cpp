#include<iostream>
#include<string>
using namespace std;
class employee
{
	public:
	string name;
	int id;
	float salary;
	public:
		virtual void calculate()=0;
};
class Regular:public employee
{
	public:
	float da,hra,bs;
	Regular(string s,int a,float b,float c,float d)
	{
		name=s;
		id=a;
		da=b;
		hra=c;
		bs=d;
	}	
	void calculate()
	{
		salary=bs+da+hra;
		cout<<"Salary of regular employee:"<<salary<<endl;
	}
};
class Part_Time:public employee
{
	public:
		int hr;
		float ph;
		Part_Time(string s,int a,int b,float p)
		{
			name=s;
			id=a;
			hr=b;
			ph=p;
		}
		void calculate()
		{
			salary=hr*ph;
			cout<<"Salary of part time employee:"<<salary<<endl;
		}
};
int main()
{
	employee *e;
	Regular b("Sam",170,60,45,700);
	Part_Time y("Sonali",592,25,87);
	e=&b;
	e->calculate();
	e=&y;
	e->calculate();
	return 0;	
}
