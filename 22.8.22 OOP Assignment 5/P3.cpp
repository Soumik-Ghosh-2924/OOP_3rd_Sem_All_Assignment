#include<iostream>
using namespace std;
int c=0,ct=0;
class data1{
    int n1;
    public:

        void input(int n){
            
			n1=n;
            c=c+1;
        }
        void output(){
        	ct+=1;
            cout<<n1<<endl;
            cout<<"Total "<<c<<" times input function is called!";
        }


};
int main()
{
    data1 d1;
    d1.input(10);
    d1.input(15);
    d1.input(20);
    d1.output();
    cout<<"\n Total "<<ct<<" times output function is called!";
    
    return 0;
}
