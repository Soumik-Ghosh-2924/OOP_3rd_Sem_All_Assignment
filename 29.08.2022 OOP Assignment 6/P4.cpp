#include <iostream>
using namespace std;

class A
{
	public:
	A()
	{
		cout << "Within 1st class." << endl;
	}
};
class B : public A
{
	public:
	B()
	{
		cout << "Within 2nd class" << endl;
	}
};
int main() {
	
	B b;
	
	return 0;
}

