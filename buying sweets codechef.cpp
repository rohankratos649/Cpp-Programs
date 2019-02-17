#include<iostream>
#include<algorithm>
using namespace std;
int main()
{int t,n,x,nos,i,a[20],sum=0;
cin>>t;
while(t--)
{   
	cin>>n>>x;
	sum=0;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		sum=sum+a[i];
	}
	sort(a,a+n);
	for(i=0;i<n;i++)
		nos=sum/x;
		if((sum-a[0])/x==nos)
		cout<<-1<<endl;
		else
		cout<<nos<<endl;
}
return 0;
}
