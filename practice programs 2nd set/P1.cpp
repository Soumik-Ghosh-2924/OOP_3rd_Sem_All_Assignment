#include<iostream>
using namespace std;
int main()
{
	int n1,n2;
	cout<<"enter size of 1st array :\n";
	cin>>n1;
	cout<<"enter size of 2nd array : \n";
	cin>>n2;
	int i,j,t1,t2,c=0, A1[n1],A2[n2],A3[50];
	cout<<"Enter elements of the first array : \n";
	for(i=0;i<n1;i++)
	{
		cout<<"A1["<<i<<"] : ";
		cin>>A1[i];
	}
	for(i=0;i<n1;i++)
	{
		for(j=i+1;j<n1;j++)
		{
			if(A1[i]>A1[j])
			{
				t1=A1[i];
				A1[i]=A1[j];
				A1[j]=t1;
			}
		}
	}
	cout<<"The 1st array has been sorted.\n";
	cout<<"Enter elements of the second array : \n";
	for(i=0;i<n2;i++)
	{
		cout<<"A2["<<i<<"] : ";
		cin>>A2[i];
	}
	for(i=0;i<n2;i++)
	{
		for(j=i+1;j<n2;j++)
		{
			if(A2[i]>A2[j])
			{
				t1=A2[i];
				A2[i]=A2[j];
				A2[j]=t1;
			}
		}
	}
	cout<<"The 2nd array has been sorted.\n";
	cout<<"The union of the 2 arrays : \n";
	i=0,j=0;
	while(i<n1 && j<n2)
	{
		if(A1[i]<A2[j]){
			cout<<A1[i++]<<" ";
		}
		else if (A2[i]<A1[j]){
			cout<<A2[j++]<<" ";
		}
		else{
			cout<<A2[j++]<<" ";
			i++;
		}
	}
	while(i<n1)
	{
		cout<<A1[i++]<<" ";
	}
	while(j<n2)
	{
		cout<<A2[j++]<<" ";
	}
	return 0;
	
}
