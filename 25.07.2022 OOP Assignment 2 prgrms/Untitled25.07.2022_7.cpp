#include<iostream>
#include<cmath>
using namespace std;
class Coordinates
{
public:
    int x_coordinate; //to store x coordinate
    int y_coordinate; // to store y coordinate
    
    void setcoordinate1()
    {
    	cout<<"enter x coordinate"<<endl;
		cin>>x_coordinate;
	}
	void setcoordinate2()
	{
        cout<<"enter y coordinate"<<endl;
		cin>>y_coordinate;
		
    }
    };
int main()
    {
        Coordinates c[5];
        int s,x,t,e;
        float d=0.0;
        for(int i=0;i<2;i++)
		{
			c[i].setcoordinate1();
		}
		for(int i=0;i<2;i++)
		{
			c[i].setcoordinate2();
		}
        for(int i=0;i<1;i++)
        {
        	s=c[i].x_coordinate-c[i+1].x_coordinate;
        	x=c[i].y_coordinate-c[i+1].y_coordinate;
        	
		}
		d=sqrt(s*s+x*x);
		cout<<d;
		return 0;
		
    }
