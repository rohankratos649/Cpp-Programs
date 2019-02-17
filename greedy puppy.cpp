#include<iostream>
using namespace std;
int main()
{int t,n,k,ans,i;
   cin>>t;
   while(t--)
   {
   	  cin>>n>>k;
   	  ans=0;
   	  for(i=0;i<=k;i++)
   	  if (ans<n%i)
        ans=n%i;
   	  cout<<ans<<endl;
   }
   return 0;
}
