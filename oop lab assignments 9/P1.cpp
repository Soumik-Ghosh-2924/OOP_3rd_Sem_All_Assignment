#include<iostream>
using namespace std;

class shape
{
	public:
		int x,y;
		void measurement(double i, double j=0 )
		{
			x=i;
			y=j;
		}
		
		virtual void area()
		{
			cout<<"class shape \n";
		}
};

class circle : public shape
{
	public :
		void area(void)
		{
			cout<<"the area of the circle is : "<<endl;
			cout<<3.14*x*x<<endl;
		}
};

class square : public shape 
{
	public :
		void area(void)
		{
			cout<<"the area of the square = "<<endl;
			cout<<x*x<<endl;
		}
};

class triangle : public shape
{
	public :
		void area(void)
		{
			cout<<"the area of the triangle : "<<endl;
			cout<<0.5*x*y<<endl;  
		}
};

int main()
{
	shape *p;
	circle C;
	square S;
	triangle T;
	
	p=&C;
	C.measurement(5.2);
	C.area();
	
	p=&S;
	S.measurement(2.3,1.5);
	S.area();
	
	p=&T;
	T.measurement(2,6);
	T.area();
	
	return 0;
	
}
