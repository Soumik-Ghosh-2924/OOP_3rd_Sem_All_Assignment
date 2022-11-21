#include<iostream>
using namespace std;
class Over
{
	private:
		int a[5];
	public:
		Over(int b[5]=0){a[5]=b;}
		friend istream & operator >>(istream & get, Over &k)
		{
			get>>k.a;
			return get;
		}
		friend ostream & operator <<(ostream & put, Over &k)
		{
			put>>k.a;
			return put;
		}
};
int main()
{
	Over A;
	int i;
	for(i=0;i<5;i++)
	{
		cin>>A::a[i];
	}
	for(i=0;i<5;i++)
	{
		cout<<A::a[i]<<endl;
	}
	return 0;
}
