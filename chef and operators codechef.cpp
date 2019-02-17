#include<iostream>
using namespace std;
int main()
{int t,num,rev=0,num1;
  cin>>t;
  while(t--)
  {
  	cin>>num1;
  	num=num1;
  	while(num!=0)
  	{
  		rev=rev*10;
  		rev=num%10+rev;
  		num=num/10;
	  }
	  if(num1==rev)
	  cout<<"wins"<<endl;
	  else 
	  cout<<"losses"<<endl;
	  rev=0;
  }
  return 0;
}
