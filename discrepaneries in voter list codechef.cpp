#include<iostream>
using namespace std;
int main()
{
	int n1,n2,n3,a[10],i,j,k,count=0,d[10],b[10],c[10];
	cin>>n1;
	for(i=0;i<n1;i++)
	{cin>>a[i];
	}
	cin>>n2;
	for(i=0;i<n2;i++)
	{cin>>b[i];
	}
	cin>>n3;
	for(i=0;i<n3;i++)
	{cin>>c[i];
	}
	for(i=0;i<n1;i++)
	{
		for(j=0;j<n2;j++)
			{
				for(k=0;k<n3;k++)
				{
					if(a[i]==b[j]||a[i]==c[k])
					count++;
					d[i]=a[i];
					if(b[j]==c[k])
					count++;
					d[i]=b[i];
				}
			}
	}
	cout<<count;
	for(i=0;i<count;i++)
	{
		cout<<d[i];
	}
	return 0;
}
