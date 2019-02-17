#include<iostream>
using namespace std;
int main()
{int t,n,a[10],i,j,same,count,flag=0;
cin>>t;
while(t--)
{cin>>n;
same=0,count=0,flag=0;
for(i=0;i<n;i++)
{cin>>a[i];
}
for(i=0;i<n;i++)
{for(j=i+1;j<n;j++)
   if(a[i]==a[j])
   {
   same++;
    flag=0;   
}
   else 
  { count++;
   flag=1;
}
}
if(flag==0)
cout<<n-same<<endl;
if(flag==1)
cout<<count+1<<endl;
}
}
