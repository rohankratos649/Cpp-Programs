#include<iostream>
using namespace std;
int main()
{int t,fn,ln,i,j,flag=0;
cin>>t;
while(t--)
{
	cin>>fn>>ln;
	for(i=fn+1;i<ln;i++)
	{
		for(j=2;j<i;j++)
		{
			if(i%j!=0)
			flag=1;
			if(i%j==0)
			flag=0;
			break;
		}
		if(flag==1)
		cout<<i<<endl;
	}
	cout<<endl;
}
	return 0;
}
