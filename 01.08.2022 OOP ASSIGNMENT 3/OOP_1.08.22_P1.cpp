#include<iostream>
class distance
{
	int feet;
	int inches;
public:
	void getdistance(int f,int i)
	{
		feet=f;
		inches=i;
	}
	void displaydistance(void)
	{
		std :: cout<<feet<<"Feet and ";
		std :: cout<<inches<<"Inches "<<std :: endl;
	}
	void sumdist(distance,distance);
};
void distance :: sumdist(distance d1, distance d2)
{
	inches=d1.inches + d2.inches;
	feet=inches/12;
	inches=inches%12;
	feet=feet+d1.feet+d2.feet;
}
int main()
{
	distance D1,D2,D3;
	D1.getdistance(7,6);
	D2.getdistance(9,8);
	D3.sumdist(D1,D2);
	std :: cout<<"D1=";
	D1.displaydistance();
	std :: cout<<"D2=";
	D2.displaydistance();
	std :: cout<<"D3=";
	D3.displaydistance();
	return 0;
}
