#include<stdio.h>
using namespace std;
class distance1;
class distance2;
class distance1{
	int inches1;
	int feet1;
	int centi1;
	int meter1;
	public:
		void getdata(int i1, int f1,int c1,int m1)
		{
			inches1=i1;
			feet1=f1;
			centi1=c1;
			meter1=m1;
		}
		friend void greater(distance1 &, distance2 &);
};
class distance2{
	int inches2;
	int feet2;
	int centi2;
	int meter2;
	public:
		void getdata(int i2, int f2, int c2, int m2)
		{
			inches2=i2;
			feet2=f2;
			centi2=c2;
			meter2=m2;
		}
		friend void greater(distance1 &, distance2 &);
};
void greater(distance1 &o1, distance2 &o2)
{
	int g1,g2,g3,g4;
	if(o1.inches1<o2.inches2)
	{
		g1=o2.inches2;
		printf("The greater is %d inches .",g1);
	}
	else {
		g1=o1.inches1;
		printf("The greater is %d inches .",g1);
	}
	if(o1.feet1<o2.feet2)
	{
		g2=o2.feet2;
		printf("The greater is %d feet .",g2);
	}
	else {
		g2=o1.feet1;
		printf("The greater is %d feet .",g2);
	}
	if(o1.centi1<o2.centi2)
	{
		g3=o2.centi2;
		printf("The greater is %d centimeters .\n",g3);
	}
	else {
		g3=o1.centi1;
		printf("The greater is %d inches .\n",g3);
	}
	if(o1.meter1<o2.meter2)
	{
		g4=o2.meter2;
		printf("The greater is %d inches .\n",g4);
	}
	else {
		g4=o1.meter1;
		printf("The greater is %d inches .\n",g4);
	}
}
int main()
{
	distance1 D1;
	distance2 D2;
	D1.getdata(2,6,8,10);
	D2.getdata(5,7,20,98);
	greater(D1,D2);
	
	return 0;
}
