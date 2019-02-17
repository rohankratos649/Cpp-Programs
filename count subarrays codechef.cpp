#include<iostream>
using namespace std;
int main()
{int i,n,t,a[10],count;
cin>>t;
while(t--)
{
cin>>n;
count=0;
	for(i=0;i<n;i++)
	{cin>>a[i];
	  if(a[i]<a[i+1])
	  count++;
	}
	cout<<count+n<<endl;
}
return 0;
}
