#include <iostream>
using namespace std;
int binaryScr(int a[], int low, int high, int m)
{
	if (high >= low)
	{
		int mid = low + (high - low) / 2;
		if (a[mid] == m)
		return mid;
		if(a[mid] > m)
		return binaryScr(a, low, mid - 1, m);
		return binaryScr(a, mid + 1, high, m);
	}
	return -1;
}
int main()
{
	int a[] = { 12, 13, 21, 36, 40 };
	int i,m;
	for(i=0;i<5;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
	int n = sizeof(a) / sizeof(a[0]);
	cout<<"Enter the number to be searched : \n";
	cin>>m;
	int result ;
	result = binaryScr(a, 0, n - 1, m);
	(result == -1) ? cout<<"The element is not present in array .":cout<<"The element is present at index : "<<result<<endl;
	return 0; 
}
