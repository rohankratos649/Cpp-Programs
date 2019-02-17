#include<iostream>
using namespace std;
int main()
{int a,b,result;
cin>>a>>b;
 result=a-b;
 if(result%10==9)    
 cout<<result-1;
 else
 cout<<result+1;
return 0;
}
