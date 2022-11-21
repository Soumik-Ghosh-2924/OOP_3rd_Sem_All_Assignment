#include<iostream>
using namespace std;
class increment
{
	public :
		void display(int x);
};
void increment :: display(int x)
{
	cout<<x+1<<" is the incremented value of the argument."<<endl;
}
int main()
{
	int n;
	cout<<"Enter value of argument : "<<endl;
	cin>>n;
	increment I;
	I.display(n);
	return 0;
}
