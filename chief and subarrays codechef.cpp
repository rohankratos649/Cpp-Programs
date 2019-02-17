#include<iostream>
using namespace std;
int main()
{int t,n,a[40],i,j;
cin>>t;
while(t--)
{
	cin>>n;
	int sum,prod,count=0;
	for(i=0;i<n;i++)
	cin>>a[i];
	
	for(i=0;i<n;i++)
	{sum=a[i];
	prod=a[i];
	
	for(j=i+1;j<n;j++)
	{sum=sum+a[j];
	prod=prod+a[j];
	if(sum==prod)
	count++;
	}
	}
	cout<<n+count<<endl;
}
return 0;
}
