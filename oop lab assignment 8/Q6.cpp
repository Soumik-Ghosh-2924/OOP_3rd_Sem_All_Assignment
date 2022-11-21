#include<iostream>
using namespace std;
class Distance
{
	private :
		int feet ;
		int inches ; 
	public:
		Distance(){}
		Distance(int f, int i)
		{
			feet=f;
			inches=i;
		}
		Distance operator +(Distance d)
		{
			Distance t;
			t.feet=feet+d.feet;
			t.inches=inches+d.inches;
			return t;
		}
		Distance operator +(Distance e, int l)
		{
			Distance f;
			f.feet=e.feet+l;
			f.inches=e.feet+l;
			return f;
		}
	friend ostream & operator <<(ostream &put, Distance &d)
    {
        put<<d.feet<<d.inches;
        return put;
    }
};
int main()
{
	Distance D(2,7);
	Distance E(5,9); 
	Distance F;
	F=D+E;
	cout<<F;
	Distance G;
	G=D+10;
	cout<<G;
	return 0;
}
