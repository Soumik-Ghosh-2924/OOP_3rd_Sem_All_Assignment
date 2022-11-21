#include<iostream>
using namespace std;
class complex{
    int real;
    int imaginary;
    public:
        complex(){
            real=0;
            imaginary=0;
        }
        complex(int real,int imaginary){
            this->real=real;
            this->imaginary=imaginary;
        }
        complex (int real){
            this->real=real;
            imaginary=0;
        }
        void display(){
            cout<<real<<"+"<<imaginary<<"i"<<endl;
        }
        ~complex(){
            cout<<"Destructor called."<<endl;
        }

};
int main()
{
    cout<<"The complex numbers are : \n";
    {
    	complex c;
    	c.display();
    	complex c1(3,5);
   		c1.display();
    	complex c2(3);
    	c2.display();
    }
    cout<<"The destructor is called 3 times since 3 objects are created .";
    return 0;
}
