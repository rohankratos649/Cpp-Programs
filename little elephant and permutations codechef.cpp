#include<iostream>
using namespace std;
int main()
{
	int t,i,j,a[10],inv=0,l_inv=0,n;
	cin>>t;
	while(t--)
	{    inv=0,l_inv=0;
		cin>>n;
		for(i=0;i<n;i++)
		{cin>>a[i];
	}
	 if(n==1)
      {cout<<"YES"<<endl;
        continue;
      }
      else
	{for(i=0;i<n;i++)
		for(j=i+1;j<n;j++)
		{  if(a[i]>a[j])
		   inv++;
		}
		for(i=0;i<n-1;i++)
		{ if(a[i]>a[i+1])
		  l_inv++;	
		}
	}
	if(inv==l_inv)
	cout<<"YES"<<endl;
	else 
	cout<<"NO"<<endl;
	}
	return 0;
}
