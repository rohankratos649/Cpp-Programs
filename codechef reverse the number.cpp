#include<iostream>
using namespace std;
int main()
{int t,rev=0;
long int num;
	cin>>t;
	while(t--)
	{   
	  cin>>num;
		while(num!=0)
	{
		rev=rev*10;
		rev=num%10+rev;
		num=num/10;
	}
	cout<<rev<<endl;
	rev=0;
}
return 0;
}
