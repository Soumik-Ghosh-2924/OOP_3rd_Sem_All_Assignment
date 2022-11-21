#include<iostream>
using namespace std;
class Time  
{
    public:
        int T;
    Time(){}
    Time (int i)
    {
        T=i;
    }
    Time operator + (Time k)
    {
    	Time r;
    	r.T=T+k.T;
    	return r;
	}
    Time operator ==(Time t)
    {
        if(T==t.T)
		{
        	return 1;
		}
		else{
			return 0;
		}
    }
    friend ostream & operator <<(ostream &put, Time &t)
    {
        put<<t.T;
        return put;
    }
};
int main()
{
    Time A(25);
    Time B(16);
    Time c;
    Time l;
    c=A+B;
    l=A==B;
    cout<<c<<endl;
    cout<<l;
    return 0;
}
