#include<stdio.h>
int main()
{
	int n , A[100];
	printf("Enter size of array : \n");
	scanf("%d",&n);
	int i;
	for(i=0;i<n;i++)
	{
		printf("A[%d] =",i);
		scanf("%d",&A[i]);
	}
	printf("The reverse of the array is : \n");
	for(i=n-1;i>=0;i--)
	{
		printf("%d ", A[i]);
	}
	return 0;
}

