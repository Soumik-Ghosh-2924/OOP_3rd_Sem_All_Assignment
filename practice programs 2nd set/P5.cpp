#include<stdio.h>
int main()
{
	int n1,n2;
	printf("enter size of array :\n");
	scanf("%d",&n1);
	int i,j,t1, A1[n1];
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
	printf("The 1st array has been sorted.\n\n");
	printf("The menu is shown as follows : \n");
	printf("Enter 1 to get even elements . \n");
	printf("Enter 2 to get odd elements . \n");
	printf("Enter 3 to exit. \n");
	int s;
	printf("Enter your choice : \n");
	scanf("%d ",&s);
	switch(s)
	{
		case 1 :
			printf("The even elements are : \n");
			for(i=0;i<n1;i++)
			{
				if(A1[i]%2==0)
				{
					printf("%d ",A1[i]);
				}
			}
			break;
			
			
		case 2:
			printf("The odd elements are : \n");
			for(i=0;i<n1;i++)
			{
				if(A1[i]%2!=0)
				{
					printf("%d ",A1[i]);
				}
			}
			break;
		
		
		case 3:
			printf("Your program was terminated due to absence of lack of case as per choice.");
			break;
		}
			
	return 0;	
	}
