#include<iostream>
using namespace std;
int main()
{
	int n,sum;
	int *ptr= new int[10];
	cout<<"enter no of items u want in your array :"<<endl;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cout<<" enter "<<i<<" element : ";
		cin>>ptr[i];
	}
	for(int i=0;i<n;i++)
	{
		sum=sum+ptr[i];
	}
	cout<<"The Summation of all 10 elements is : "<<sum<<endl;
	return 0; 
}
