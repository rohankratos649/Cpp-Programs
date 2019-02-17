#include<iostream>
using namespace std;
int GCD(long a,long b)
{int temp;
	if(a>b) 
{	temp=a;
	 a=b;
	 b=temp;
}
    if(b%a==0)
    return a;
    else 
    return GCD(a,b%a);
}

int main()
{long a,b;
int t;
cin>>t;
while(t--)
{	cin>>a>>b;
	cout<<GCD(a,b)<<" "<<a*b/GCD(a,b)<<endl;   //lcm=(a*b)/gcd
}
return 0;
}
