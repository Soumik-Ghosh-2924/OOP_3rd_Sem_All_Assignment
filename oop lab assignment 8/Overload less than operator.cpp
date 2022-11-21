#include<iostream>
using namespace std;
class number 
{
    public:
        int x;
    number(){}
    number (int i)
    {
        x=i;
    }
    number operator <(number d)
    {
        number t;
        if(t.x<d.x){return 1;}
        else{
        	return 0;
		}
    }
    friend ostream & operator <<(ostream &put, number &d)
    {
        put<<d.x;
        return put;
    }
};
int main()
{
    number A(100);
    number B(16);
    number c;
    c=A<B;
    cout<<c;
    return 0;
}
