#include<iostream>
using namespace std;
int main()
{int t,n,h=0,f=0,ten=0,five=0,two=0,one=0,sum=0;
cin>>t;
while(t--)
{cin>>n;
	if(n>=100)
	{h=n/100;
	n=n%100;
}
	if(n>=50)
	{f=n/50;
	n=n%50;
}
	if(n>=10)
	{ten=n/10;
	n=n%10;
}
	if(n>=5)
	{five=n/5;
	n=n%5;
}
	if(n>=2)
	{two=n/2;
	n=n%2;
}
	if(n>=1)
	{one=n;
}
	sum=h+f+ten+five+two+one;
	cout<<sum<<endl;
}
return 0;
}
