#include<iostream>
using namespace std;
void swap (int &num1, int &num2) 
{
        int temp;
        temp=num1;
        num1=num2;
        num2=temp;
}
int main()
{
        int a,b;
        cout<<" \n enter value of a : \n"<<endl;
		cin>>a;
		cout<<" \n enter value of b : \n"<<endl;
		cin>>b; 
        cout<<"\n Before swapping"<<"\n A = "<<a<<"\n B = "<<b<<endl;
        swap(a,b);
        cout<<"\n After swapping"<<"\n A = "<<a<<"\n B = "<<b<<endl;
        return 0;
}
