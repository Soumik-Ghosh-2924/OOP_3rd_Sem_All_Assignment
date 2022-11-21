//Single inheritance

#include<iostream>
using namespace std;

class A {
	int a;
	public :
		int b;
		void set_ab();
		int get_a(void);
		void show_a(void);
};
class D : public A
{
	int c;
	public :
		void mul(void);
		void display(void);
};
void A :: set_ab(void)
{
	a=28;
	b=76;
}
int A ::get_a()
{
	return a;
}
void A :: show_a()
{
	cout<< "a = "<<a<<"\n";
}
void D :: mul()
{
	c= b*get_a();
}
void D :: display()
{
	cout<<"a ="<<get_a()<<"\n";
	cout<<"b ="<<b<<endl;
	cout<<"c ="<<c<<endl;
}
int main()
{
	D obj;
	obj.set_ab();
	obj.mul();
	obj.display();
	obj.b=20;
	obj.mul();
	obj.display();
	return 0;
}
