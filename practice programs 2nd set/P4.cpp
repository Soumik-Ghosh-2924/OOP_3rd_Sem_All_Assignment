#include<stdio.h>
int main()
{
	int n1,n2;
	printf("enter size of 1st array :\n");
	scanf("%d",&n1);
	printf("enter size of 2nd array : \n");
	scanf("%d",&n2);
	int i,j,t1,t2,c=0, A1[n1],A2[n2],K[50];
	printf("Enter elements of the first array : \n");
	for(i=0;i<n1;i++)
	{
		printf("A1[%d] : ",i);
		scanf("%d",&A1[i]);
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
	printf("The 1st array has been sorted.\n");
	printf("Enter elements of the second array : \n");
	for(i=0;i<n2;i++)
	{
		printf("A2[%d] : ",i);
		scanf("%d",&A2[i]);
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
	printf("The 2nd array has been sorted.\n");
	for(i=0;i<n1;i++)
	{
		K[i]=A1[i];
	}
	for(i=n1,j=0;i<(n1+n2)-1,j<n2;i++,j++)
	{
		K[i]=A2[j];
	}
	for(i=0;i<(n1+n2);i++)
	{
		printf("%d ",K[i]);
	}
	return 0;
}
