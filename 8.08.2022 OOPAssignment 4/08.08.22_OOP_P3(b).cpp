#include<iostream>
using namespace std;
class Display{
	public :
	void display1(char );
	void display1(void );
};
void Display :: display1(char a)
{
	cout<<a<<endl;
}
void Display ::	 display1(void)
{
	cout<<"*"<<endl;
}

int main()
{
	Display D;
	int n,i;
	char c;
	cout<<"enter character : "<<endl;
	cin>>c;
	cout<<"enter number value of n:"<<endl;
	cin>>n;
	if(n>0)
	{
		for(i=0;i<n;i++)
		{
			D.display1(c);
		}
	}
	else if (n==' ')
	{
		for(i=1;i<=80;i++)
		{
			D.display1(c);
		}
	}
	else 
	{
		for(i=1;i<=80;i++)
		{
			D.display1();
		}
	}
	return 0;
}

