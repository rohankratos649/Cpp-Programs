#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int t,s1,s2,n,k,i,a[10];
	cin>>t;
	while(t--)
	{   s1=0,s2=0;
		cin>>n>>k;
		for(i=0;i<n;i++)
		{cin>>a[i];}
		sort(a,a+n);
		for(i=0;i<k;i++)
          {s1=s1+a[i];
		    }
          for(i=k;i<n;i++)
          {s2=s2+a[i];
		     }
          cout<<s2-s1<<endl;
	}
	return 0;
}
