#include<iostream>
using namespace std;
class THIRD;
class TWO;
class ONE{
    int a;
    public:
    void getdata(int X){
        a=X;
    }
    friend void largest(ONE &,TWO &,THIRD &);
};
class TWO{
    int b;
    public:
    void getdata(int X){
        b=X;
    }
    friend void largest(ONE &,TWO &,THIRD &);

};
class THIRD{
    int c;
    public:
    void getdata(int X){
        c=X;
    }
    friend void largest(ONE &,TWO &,THIRD &);

};
void largest(ONE &o1,TWO &o2,THIRD &o3){
    int large;
    if(o2.b<o1.a && o3.c<o1.a)
        large=o1.a;
    else if(o1.a<o2.b && o3.c<o2.b)
        large=o2.b;
    else
        large=o3.c;
    cout<<"Largest No :"<<large;
}
int main()
{
    ONE s1;
    TWO s2;
    THIRD s3;
    s1.getdata(90);
    s2.getdata(67);
    s3.getdata(16);
    printf("Among the given numbers , the ");
    largest(s1,s2,s3);

    
    return 0;
}
