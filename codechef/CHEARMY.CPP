#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<cstring>
#define li unsigned long long int
using namespace std ;
char a[20];

int main()
{
		li t,k;
	scanf("%llu",&t);
	while(t--)
	{li z=0;
		scanf("%llu",&k);
       z=k-1;
       int i=0;
       while(z!=0)
       {
       	li r=z%5;
       	z/=5;
       	a[i]=char(int(48+r));
       	i++;
	   }
	   int n=strlen(a);
	   reverse(a,a+n);
	   li ans=2*(strtoll(a,NULL,10));
       
   printf("%llu\n",ans);
		
		
	}
	
	return 0;
	
}
