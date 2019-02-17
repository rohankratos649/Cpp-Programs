#include<bits/stdc++.h>
using namespace std;
int main()
{int t,n,m,i,a[10],sum=0;
cin>>t;
while(t--)
{
	cin>>n>>m;
	for(i=0;i<n;i++)
	{cin>>a[i];
	}
	sort(a,a+n);
	for(i=0;i<n;i++)
	sum=sum+a[i];
	if(sum>m)
	i++;
	if(sum==m)
	cout<<"YES";
}
return 0;
}
