#include<iostream>
using namespace std;
int main()
{int t,i,n,ans;
cin>>t;
for(int i=0;i<t;i++)
{   int r=0,b=0,g=0;
    int ans=0;
    for(i=0;i<t;i++)
	cin>>n;
	string s;
	
     for(i=0;i<n;i++)
     {cin>>s[i];
	}
	 {if(s[i]=='R')
		 r++;
	  if(s[i]=='G')
	    g++;
	  if(s[i]=='B')
	    b++;
	    }
       ans=(r>b?((r>g)?r:g):((b>g)?b:g));
	   cout<<n-ans;	
}
   return 0;
}

