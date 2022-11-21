#include<iostream>
#include<conio.h>
using namespace std;
const float pi=3.14;
float area(float n,float b,float h)
{
float ar;
ar=n*b*h;
return ar;
}
float area(float r)
{
float ar;
ar=pi*r*r;
return ar;
}
float area(float l,float b)
{
float ar;
ar=l*b;
return ar;
}
int main()
{
float b,h,r,l;
float result;
cout<<"Enter the Base & Hieght of Triangle: \n";
cin>>b>>h;

result=area(0.5,b,h);
cout<<"Area of Triangle: "<<result<<endl;
cout<<"Enter the Radius of Circle: \n";
cin>>r;
result=area(r);
cout<<"Area of Circle: "<<result<<endl;
cout<<"Enter the Length & Bredth of Rectangle: \n";
cin>>l>>b;
result=area(l,b);
cout<<"Area of Rectangle: "<<result<<endl;
getch(); 
}
