//Multi-level inheritance.

#include<iostream>
using namespace std;
class A{
	int a;
	public:
		void get(){
			a=10;
		}
		void show(){
			cout<<a;
		}
	};
class B: public A{
	int b;
	public :
		void get(){
			A::get();
			b=20;
		}
		void show(){
			cout<<b;
		}
	};
class C : public B{
	int c;
	public :
		void get(){
			B::get();
			c=30;
		}
	};
int main()
{
	C obj;
	obj.get();
	obj.show();
	return 0;
}
