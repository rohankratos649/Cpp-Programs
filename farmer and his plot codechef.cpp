#include<iostream>
using namespace std;
int main()
{int l,b,side,t;
cin>>t;
while(t--)
{   side=0;
	cin>>l>>b;
	if(l>=b)
	{side=b/2;                                   /*we can also use gcd function under algorithm library 
	                                                 then use (l*b)/gcd of both the length*/
	cout<<(l*b)/(side*side)<<endl;   
}
	else
	{side=l/2;
	cout<<(l*b)/(side*side)<<endl;
}
}
	return 0;
}
