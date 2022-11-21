#include<iostream>
#include<string>
using namespace std;
class account
{
	public:
	int num;
	string name;
	float balance;
	public:
		account(string s,int x,float b)
			{
				name=s;
				num=x;
				balance=b;
			}
		virtual void display()
		{
			cout<<"Name:"<<name<<endl<<"Account Number:"<<num<<endl<<"Balance:"<<balance;
		}
};
class savings:public account
{
	public:
		float min;
		public:
			savings(float p)
			{
				min=p;
			}
			void deposit(float q)
			{
				balance+=q;
			}
			void withdraw(float r)
			{
				if(r<min)
				{
				cout<<"withdrawl possible"<<endl;
				balance-=r;
			    }
				else
				cout<<"Withdrawl not possible"<<endl;
			}
			void display()
			{
				cout<<"Balance:"<<balance;
			}		
};
class current:public account
{
    public:
	float s;
	public:
	current(float t)
	{
		s=t;
		}	
		void display()
		{
			cout<<"Overdue amount:"<<s<<endl;
		}
};
int main()
{
	account *a;
	account e("Madhusnuhi",123,100);
	savings b(40.5);
	current c(60.5);
	a=&e;
	a->display();
	a=&b;
	a->deposit(34.6);
	a->withraw(20.5);
	a->display();
	a=&c;
	a->display();
	return 0;
}
