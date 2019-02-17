#include<iostream>
#include<math.h>
using namespace std;
int main()
{int num,t,i,flag;
cin>>t;
while(t--)
{
flag=0;
cin>>num;
for(i=2;i<=sqrt(num);i++)
{
	if(num%i==0)
	{
	flag=1;
	break;
    }
}
    if(flag==0)
    cout<<"yes"<<endl;
    else
    cout<<"no"<<endl;
}
return 0;
}
