#include<bits/stdc++.h>
using namespace std;
#define ll unsigned long long int  
ll mod=1000000009;
int main()  
{  


 ll i,x,sum1,count,y,sum2,j;  

 ll t,n;  
  scanf("%llu",&t);

 while(t--)
 { 
 ll sum=0;
 scanf("%llu",&n);

    if(n==1)
    {
    	printf("1\n");
	}
	else
	if(n==2)
	{
		printf("10\n");
	}
	else
	if(n%2==1)
	{
		ll l=(n-1)/2;
		sum=((((16*l*l*l)%mod+(30*l*l)%mod+(26*l)%mod+3)%mod)*666666673)%mod;
	}
	else
	{
	
  sum1=1; sum2=1;i=1;x=4;j=1;  
  for(count=1,y=2;count<n;count++,y+=2)  
   {  
     i=i+x;  
     sum1=(sum1+i)%mod;   
      if((count%2==0) && (count!=1))  
         x+=4;  

     j+=y;  
     sum2=(sum2+j)%mod;  
   }    
      
      sum=(sum1+sum2)%mod;
 }
     printf("%llu\n",sum);

}
 return 0;  
}  
