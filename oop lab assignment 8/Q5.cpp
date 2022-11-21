#include<iostream>
using namespace std;
class Distance  
{
    public:
        int D;
    Distance(){}
    Distance (int i)
    {
        D=i;
    }
    Distance operator +(Distance k)
    {
    	Distance r;
    	r.D=D+k.D;
    	return r;
	}
    Distance operator >(Distance d)
    {
        if(d.D>D)
		{
        	return d.D;
		}
		else{
			return D;
		}
    }
    friend ostream & operator <<(ostream &put, Distance &d)
    {
        put<<d.D;
        return put;
    }
};
int main()
{
    Distance A(2);
    Distance B(7);
    Distance c;
    Distance l;
    c=A+B;
    l=A>B;
    cout<<c<<endl;
    cout<<l;
    return 0;
}
