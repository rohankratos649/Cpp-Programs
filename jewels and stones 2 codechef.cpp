#include<iostream>
#include<string.h>
using namespace std;
int main()
{int t,i,j,count=0;
string J,S;
	cin>>t;
	while(t--)
	{
		cin>>J;
		cin>>S;		
     	for(i=0;i<J.size();i++)
		{for(j=0;j<S.size();j++)
			if(J[i]==S[j])
		{
			count++;
			break;
		}
		    else 
		    continue;
		}
		cout<<count<<endl;
	}
	return 0;
}
