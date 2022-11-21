//HYBRID inheritance 

#include<iostream>
using namespace std;

class A{
	protected :
		int a;
	public :
		void get_a(){
			cout<<"enter value of 'a' = "<<endl;
			cin>>a;
		}
	};
class B:public virtual A{
	protected :
		int b;
	public :
		void get_b(){
			cout<<"enter value of 'b' = "<<endl;
			cin>>b;
		}
	};
class C:public virtual A{
	protected :
		int c;
	public :
		void get_c(){
			cout<<"enter value of 'c' = "<<endl;
			cin>>c;
		}
	};	
class D: public B, public C{
	protected :
		int d;
	public :
		void multiply()
		{
			A::get_a();
			B::get_b();
			C::get_c();
			cout<<"The product of the three variables are : "<<a*b*c<<endl;
		}
	};
int main(){
	D object;
	object.multiply();
	return 0;
}
