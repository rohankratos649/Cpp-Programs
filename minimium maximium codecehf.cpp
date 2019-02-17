#include<bits/stdc++.h>
using namespace std;
int main()
{int i,t,n,a[10];
cin>>t;
while(t--)
{
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a,a+n);
	cout<<a[0]*(n-1)<<endl;
}
return 0;
}
