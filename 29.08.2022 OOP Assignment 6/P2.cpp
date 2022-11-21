#include<iostream>
using namespace std;
class Time{
    int hh;
    int mm;
    public:
        Time(){
            hh=0;
            mm=0;
        }
        Time(int hours,int minutes){
            this->hh=hours;
            this->mm=minutes;
        }
        Time(int hours){
            this->hh=hours;
            mm=0;
        }
        void display(){
            cout<<hh<<" hours and "<<mm<<" minutes."<<endl;
        }
        ~Time(){
        }

};
int main()
{
    cout<<"The timings are : \n";
    {
    	Time t1;
    	t1.display();
    	Time t2(2,7);
   		t2.display();
    	Time t3(9);
    	t3.display();
    }
    return 0;
}
