#include<stdio.h>
int main()
{
	char S[100],c,i;
	printf("Enter your string : \n");
	scanf("%[^\n]s ",&S);
	for(i=0;S[i]!='\0';i++)
	{
		c+=1;
	}
	printf("The reversed array is :\n");
	for(i=c;i>=0;i--)
	{
		printf("%c ",S[i]);
	}
	return 0;
}
