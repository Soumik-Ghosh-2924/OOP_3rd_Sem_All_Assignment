//Multiple inheritance

#include<iostream>
using namespace std;
class A{
	
	public :
	int a;
		void get_A(){
			a=10;
		}
	};
class B{
	
	public :
	int b;
		void get_B(){
			b=20;
		}
	};
class C : public A, public B{
	
	public :
	int c;
		void get_C(){
			c=30;
		}
		void sum(){
			cout<<a+b+c;
		}
	};	
int main()
{
	C obj;
	obj.get_A();
	obj.get_B();
	obj.get_C();
	obj.sum();
	return 0;
}
