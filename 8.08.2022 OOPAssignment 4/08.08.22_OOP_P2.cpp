#include<iostream>
#include<conio.h>
using namespace std;
const float pi=3.14;
float volume(float r1)
{
float v1;
v1=(4/3)*pi*r1*r1*r1;
return v1;
}
float volume(float r2,float h1)
{
float v2;
v2=pi*r2*r2*h1;
return v2;
}
float volume(float l,float b,float h3)
{
float v3;
v3=l*b*h3;
return v3;
}
int main()
{
float b,hoc,hocu,ros,l,roc;
float result;
cout<<"Enter the radius of the sphere: \n";
cin>>ros;
result=volume(ros);
cout<<"Volume of sphere: "<<result<<endl;
cout<<"Enter the radius of cylinder: \n";
cin>>roc>>hoc;
result=volume(hoc,roc);
cout<<"Volume of cylinder: "<<result<<endl;
cout<<"Enter the length, breadth & height of cuboid: \n";
cin>>l>>b>>hocu;
result=volume(l,b,hocu);
cout<<"Volume of cuboid: "<<result<<endl;
getch();
}
