#include<iostream>
using namespace std;
int main()
{int t,wep,even=0,odd=0;
cin>>t;
while(t--)
{
cin>>wep;
  if(wep%2==0)
  {even++;
}
  else 
  {odd++;
} 
}
if(odd>=even)
cout<<"NOT READY";
else 
cout<<"READY FOR BATTLE";
return 0;
}
