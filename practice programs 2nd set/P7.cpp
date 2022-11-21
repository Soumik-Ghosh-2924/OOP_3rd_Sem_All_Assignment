#include<stdio.h>
int sum(int n)
{
	int s,i;
	for(i=1;i<=n;i++)
	{
		s=s+i;
	}
	return s;
}
int main()
{
	int N;
	printf("Enter number of elements :\n ");
	scanf("%d",&N);
	int S;
	S=sum(N);
	printf("The Sum of n elements is : %d",S);
	return 0;
}
