#include<stdio.h>
int main()
{int wD;
float amount,rem;
scanf("%d",&wD);
scanf("%.2f",amount);
if(wD%5==0&&wD<amount)
{rem=amount-0.50-wD;
printf("%.2f",rem);
}
else
printf("%.2f",amount);
return 0;
}
