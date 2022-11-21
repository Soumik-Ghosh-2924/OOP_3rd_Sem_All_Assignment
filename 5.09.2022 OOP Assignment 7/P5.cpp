#include<iostream>
using namespace std;
class shape {
    public:
    float l,b,r,h;

};
class circle:public shape{
    public:
    void getdata(){
        cout<<"Enter Radius of Circle :";
        cin>>r;
    }
    void showarea(){
        cout<<"Area Of Circle :"<<3.14*r*r<<endl;
    }
};
class Triangle : public shape{
    public:
    void getdata(){
        cout<<"Enter Base and Height :";
        cin>>b>>h;
    }
    void showarea(){
        cout<<"Area Of Triangle :"<<0.5*b*h<<endl;
    }
};
class Rectangle : public shape{
    public:
    void getdata(){
        cout<<"Enter Length and Breadth :";
        cin>>l>>b;
    }
    void showarea(){
        cout<<"Area Of Rectangle :"<<l*b<<endl;
    }
};
int main()
{
    Rectangle A1;
    A1.getdata();
    A1.showarea();
    Triangle A2;
    A2.getdata();
    A2.showarea();
    circle A3;
    A3.getdata();
    A3.showarea();
    
    return 0;
}
