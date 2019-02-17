#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int a,b,c,t,x1,y1,x2,x3,y2,y3,count=0;
    cin>>t;
	while(t--)
	{
		cin>>x1>>y1>>x2>>y2>>x3>>y3;
		a=pow((x2-x1),2)+pow((y2-y1),2);
		b=pow((x2-x3),2)+pow((y2-y3),2);
		c=pow((x1-x3),2)+pow((y1-y3),2);
		if(a==b+c||b==a+c||c==a+b)
		count++;
	}	
	cout<<count;
}
