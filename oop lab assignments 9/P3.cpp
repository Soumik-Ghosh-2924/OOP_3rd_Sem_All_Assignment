#include<iostream>
using namespace std;
class poly
{
	public:
	int a;
	public:
		poly()
		{
			a=5;
		}
		virtual void display()=0;	
};
class X:public poly
{
	void display()
		{
			cout<<a;
		}
};
int main()
{
	poly *b;
	X c;
	b=&c;
	b->display();
	return 0;
}
