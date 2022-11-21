#include<iostream>
#include<string.h>
using namespace std;
class Account{
    private:
    long long ac;
    string name;
    protected:
    long long balance;
    long long cash;
    public:
    void getdata(){
        cout<<"Accessing A/c Details...\n";
        cout<<"Enter A/C no :";
        cin>>ac;
        cin.ignore();
        cout<<"Enter Customer Name :";
        getline(cin, name);
        cout<<"Enter Amount to deposit in new account:";
        cin>>balance;
    }
    void showdata(){
        cout<<"Displaying A/c Details...\n";
        cout<<"A/C no :"<<ac<<endl;
        cout<<"Enter Customer Name :"<<name<<endl;
        cout<<"Enter Balance:"<<balance<<endl;
    }
    void withdraw(){
        cout<<"Enter Amount to withdraw :";
        cin>>cash;
        if(balance>cash){
            balance=balance-cash;
            cout<<"Cash withdrawn successfully!"<<endl;
        }
        else{
            cout<<"Insufficient Balance!"<<endl;
        }
    }
    void deposit(){
        cout<<"Enter Amount to Deposit :";
        cin>>cash;
        balance=balance+cash;
        cout<<"Cash deposited successfully!"<<endl;

    }
    

};
class Saving : public Account{
    private:
    long long mab=10000;
    public:
    void getdata(){
        Account::getdata();
    }
    void deposit(){
        Account::deposit();
    }
    void withdraw(){
        Account::withdraw();
    }
    
    void Checker(){
        if(balance>=mab){
            cout<<"Your Account Balance is above Minimum A/c Balance!"<<endl;
        }
        else{
            cout<<"Your Account Balance is below Minimum A/c Balance!"<<endl;
            cout<<"Please deposit ! Amount"<<endl;
        }
    }
    void showdata(){
        Account::showdata();
    }

    
};
class Current : public Account{
    protected:
    long long credit=100000;
    public:
    void getdata(){
        Account::getdata();
    }
    void deposit(){
        Account::deposit();
    }
    void withdraw(){
        Account::withdraw();
    }
    
    void Overdue(){
        
            balance=balance-credit;
            cout<<"Your Over Due Account Balance -"<<balance<<endl;

            cout<<"Please deposit ! Amount"<<endl;
        }
    void showdata(){
        Account::showdata();
    }
    
    
};

int main()
{
    Saving C1;
    Current C2;
    int option;
    while(option!='\n'){
    cout<<"Account Mode :\tPress\t 1.SAVING \t 2.CURRENT"<<endl;
    cin>>option;
    if(option==2){
        C2.getdata();
        C2.deposit();
        C2.withdraw();
        C2.showdata();
        C2.Overdue();
    }
    else{
        C1.getdata();
        C1.deposit();
        C1.withdraw();
        C1.showdata();
        C1.Checker();
    }
    }
    
    
    return 0;
}
