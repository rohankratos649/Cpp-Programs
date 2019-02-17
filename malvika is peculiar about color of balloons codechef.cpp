#include<iostream>
using namespace std;
int main()
{int i,t,a,b,A,B;
cin>>t;
while(t--)
{int A=0,B=0;
  string s;
  cin>>s;
	for(i=0;i<s.length();i++)
	{
		if(s[i]=='a')
		A++;
		if(s[i]=='b')
		B++;
	}
	if(A>=B)  cout<<B<<endl;
	else if(B>=A)  cout<<A<<endl;
	else     cout<<0<<endl;
}

return 0;
}
