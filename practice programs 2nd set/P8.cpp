#include<stdio.h>
int reverse(int n)
{
	int s=0,r;
	while(n>0)
	{
		r=n%10;
		s=s*10+r;
		n=n/10;
	}
	return s;
}
int main()
{
	int n;
	printf("Enter any number : \n");
	scanf("%d ", &n);
	int k;
	k=reverse(n);
	printf("The reverse of the number is : %d ",k);
	return 0;
}
