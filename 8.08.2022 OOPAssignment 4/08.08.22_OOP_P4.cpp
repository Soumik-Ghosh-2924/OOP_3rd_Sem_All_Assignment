#include<iostream>
#include<conio.h>
using namespace std;
class index
{
public:
inline int square(int n)
{
return n*n;
}
inline int cube(int n)
{
return n*n*n;
}
};
int main()
{
int n,r;
index p;
std :: cout<<"\nEnter the Number: \n" ;
std :: cin>>n;
r=p.square(n);
std :: cout<<"Square of "<<n<<" = "<<r<<endl;
r=p.cube(n);
std :: cout<<"Cube of "<<n<<" = "<<r<<endl;
return 0;
}
