#include<iostream>
using namespace std;
class Complex  
{
    public:
        int real;
        int imaginary;
    Complex(){}
    Complex (int i,int j)
    {
        real=i;
        imaginary=j;
    }
    Complex operator +(Complex k)
    {
    	Complex r;
    	r.real=real+k.real;
    	r.imaginary=imaginary+k.imaginary;
    	return r;
	}
    Complex operator ++(int )
    {
    	real++;
    	imaginary++;
    }
    Complex operator ++( )
    {
    	++real;
    	++imaginary;
    }
    friend ostream & operator <<(ostream &put, Complex &d)
    {
        put<<d.real<<d.imaginary;
        return put;
    }
};
int main()
{
    Complex A(3,5);
    Complex B(7,9);
    Complex c;
    c=A+B;
    A++;
    cout<<A<<endl;
    ++B;
    cout<<B<<endl;
    cout<<c<<endl;
    return 0;
}
