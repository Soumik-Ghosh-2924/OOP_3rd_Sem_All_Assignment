#include<iostream>
#include<cmath>
#include<cstdlib>
using namespace std;

int main(){
    char a[100];
    cout<<"Enter 1st no :";
    cin>>a;
    char a1[100];
    cout<<"Enter 2nd no :";
    cin>>a1;
    int ans=atoi(a)+atoi(a1);
    cout<<"Sum :"<<ans;

    
    return 0;
}
