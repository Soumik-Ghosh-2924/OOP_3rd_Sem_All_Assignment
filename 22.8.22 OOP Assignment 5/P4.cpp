#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class student{
    int rollno;
    string name;
    int marks[3];
    int tmarks=0;
    int avgmarks=0;
    
    public :
        
        void getdata(int rollno,string name,int mark[]){
            this->name=name;
            this->rollno=rollno;
            for(int i=0;i<3;i++){
                marks[i]=mark[i];
                tmarks+=marks[i];
            }
            
        }
        void display(){
            cout<<"Student Name:"<<name<<endl;
            cout<<"Rollno:"<<rollno<<endl;
            cout<<"Total Marks:"<<tmarks<<endl;
            cout<<"Avg Marks:"<<(tmarks/3)<<endl;
            
        }
    


};
int main()
{
    int n,rno,marks[3];
    string name;
    cout<<"Enter no of Total Student :";
    cin>>n;
    student s[n];
    for(int i=0;i<n;i++){
        cout<<"Enter Name:";
        cin>>name;
        cout<<"Enter Roll No:";
        cin>>rno;
        
        for(int j=0;j<3;j++){
        cout<<"Enter Marks-"<<j<<" :";
        cin>>marks[j];
        }
        
    }
    for(int i=0;i<n;i++){
        s[i].getdata(rno,name,marks);
        s[i].display();
    }
    return 0;
}

