#include<iostream>
using namespace std;
int main()
{int n,t,a[10],b[10],i,count=0;
cin>>t;
while(t--)
{   
	cin>>n;
	count=0;
	for(i=0;i<n;i++)
     cin>>a[i];
	for(i=0;i<n;i++)
	cin>>b[i];	
	
	if(a[0]>=b[0])
     count++;
     
	for(i=0;i<n;i++)		
	if((a[i+1]-a[i])>=b[i])
	  count++;
	cout<<count<<endl;
}
return 0;
}

