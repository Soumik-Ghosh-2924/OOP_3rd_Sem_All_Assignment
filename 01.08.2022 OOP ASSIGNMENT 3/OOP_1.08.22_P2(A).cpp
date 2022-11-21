#include<iostream>
using namespace std;
void swap (int n1, int n2) 
{
        int temp;
        temp=n1;
        n1=n2;
        n2=temp;
}
int main()
{
	int n1=10,n2=20;
        cout<<"\n Before swapping"<<"\n 1st value = "<<n1<<"\n 2nd value = "<<n2<<endl;
        swap(n1,n2);
        cout<<"\n After swapping"<<"\n A = "<<n1<<"\n B = "<<n2<<endl;
        return 0;
}
