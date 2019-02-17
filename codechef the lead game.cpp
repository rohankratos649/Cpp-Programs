#include<iostream>
using namespace std;
int main()
{int i,j,t,p1[],p2[],lead,winner;
cin>>t;
for(i=0;i<t;i++)
{
	cin>>p1[i]>>p2[i];
}
for(i=0;i<t;i++)
{lead[i]=p1[i]-p2[i];
max=lead[0];
if(lead[i]>0)
{
    if(lead[i]>max)
    cout<<lead[i];	
}
else 
{
    lead[i]=-lead[i];
	if(lead[i]>max)
	cout<<lead[i];	
}	
}
return 0;
}
