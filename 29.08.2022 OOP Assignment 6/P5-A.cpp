#include<iostream>
using namespace std;
class A{
        char ch;
        public:
            
            // A(A &o1){
            //     ch =new char [100];
            //     ch=(o1.ch);
            // }
            void getdata(char c){
                ch=c;
            }
            void show(){
                cout<<ch;
            }
};
int main()
{
    A a;
    char str='S';
    a.getdata(str);
    a.show();
    A b=a;
    cout<<endl;
    b.show();
    
    return 0;
}
