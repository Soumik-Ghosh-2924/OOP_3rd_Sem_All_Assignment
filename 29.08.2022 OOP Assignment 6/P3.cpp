#include<iostream>
using namespace std;
class strings{
    string A;
    int len;
    public :
        strings (string A){
            this->A=A;
            this->len=len;
        }
        void display(){
            cout<<A<<endl;
        }
        friend void con(strings A1,strings A2);
};
void con(strings A1,strings A2){
    string A3;
    A3=A1.A+A2.A;
    cout<<A3<<endl;
}
int main()
{
    string s1,s2;
    cout<<"Enter String 1and String 2:";
    cin>>s1>>s2;
    strings n(s1);
    strings n2(s2);
    con(n,n2);
    
    return 0;
}
