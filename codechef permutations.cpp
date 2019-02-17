#include<iostream>
using namespace std;
int main()
{int t,n[],i,count[];
cin>>t;
while(t--)
{
	for(i=1;i<=t;i++)
	{cin>>n[i];
     }
   for(i=1;i<=t;i++)
     for(j=1;j<=t;j++)
    {if(j==n[i])
      {count[i]++;
      break;
  }
  else
  {count[i]++;
  }
  cout<<count[i];
   }
   for(i=1;i<=t;i++)
if(count[i]==n[i])	
cout<<ambiguous<<endl;
else 
cout<<not ambiguous<<endl;
}
return 0;
}
