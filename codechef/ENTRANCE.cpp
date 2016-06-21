#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<cstring>
#define li unsigned long long int
#define l 10000
using namespace std ;
li sum[l+2];

int main()
{
	li t,n,k,e,m;
	scanf("%llu",&t);
	while(t--)
	{
		memset(sum,0,sizeof(sum));
		scanf("%llu%llu%llu%llu",&n,&k,&e,&m);
	
		for(li i=0;i<n-1;i++)
		{
			li sum1=0;li z;
			for(li j=1;j<=e;j++)
			{
				scanf("%llu",&z);
				sum1=sum1+z;
			}
			
			sum[i]=sum1;
			
		}
		li ser=0;
		for(li j=1;j<e;j++)
		{
			li q;
			scanf("%llu",&q);
			ser=ser+q;
		}
		
		sort(sum,sum+n-1);
	
		li ans=(ser>sum[n-k-1])?0:(sum[n-k-1]-ser+1);
		if(ans<=m)
		{
			printf("%llu\n",ans);
		}
		else
		{
			printf("Impossible\n");
			
		}
	}
	return 0;
}
