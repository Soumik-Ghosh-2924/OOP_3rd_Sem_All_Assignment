#include<iostream>
using namespace std;
class display{
	public :
	void display1(char );
	void display2(char );
};
void display :: display1(char a)
{
	cout<<a<<endl;
}
void display ::	 display2(char x)
{
	cout<<x<<endl;
}

int main()
{
	display D;
	int n,i;
	char c,d;
	cout<<"enter character : "<<endl;
	cin>>c;
	cout<<"enter alternative character : "<<endl;
	cin>>d;
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
			D.display2(d);
		}
	}
	return 0;
}

