#include<iostream>
using namespace std;
int main()
{int t,rem;
long int num;
cin>>t;
while(t--)
{cin>>num;
  int count=0;
   while(num>0)
	{
		rem=num%10;
		num=num/10;
		if(rem==4)
		count++;
	}
	cout<<count<<"\n";
}
return 0;
}
