#include<iostream>
#include<iomanip>
using namespace std;
int main()
{float g_salary,salary,t;
	cin>>t;
	while(t--)
	{
		cin>>salary;
		if(salary<1500) 
		{
		g_salary=salary+salary*0.1+salary*0.9;
	}
		if(salary>=1500)
		{
		g_salary=salary+500+0.98*salary;
	}
	  cout<<fixed<<setprecision(2)<<g_salary<<endl;     		
	}
}
