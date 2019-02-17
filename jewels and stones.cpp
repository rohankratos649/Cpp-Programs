#include<iostream>
#include<string.h>
using namespace std;
int main()
{int t,i,j,len1,len2;
char J[20],S[20];
	cin>>t;
	int  count=0,count1=0;
	while(t--)
	{
		for(i=0;J[i]!='\0';i++)
		cin>>J[i];
		for(i=0;S[i]!='\0';i++)
		{cin>>S[i];}
          len1=strlen(J);
		  len2=strlen(S);		
		
		for(i=0;i<len1;i++)
		{for(j=0;j<len2;j++)
			if(J[i]==S[j])
			count++;
			if(J[i]==J[j])
			count1++;
		}
		cout<<count-count1<<endl;
	}
	return 0;
}

