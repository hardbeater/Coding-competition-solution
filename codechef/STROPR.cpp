#include<iostream>
#include<cstdio>
#include<vector>
#include<cstdlib>
#include<cmath>
#include<cstring>
typedef unsigned long long int lli;
lli mod=1000000007;
using namespace std;
lli a[100010];
lli nu,de;
 
lli power(lli a,lli b)
{
      lli  res = 1;
    while(b > 0) {
        if( b % 2 != 0) {
            res = (res * a) % mod;
        }
        a = (a * a) %mod;
        b /= 2;
    }
    return res;
 
 
 
}
 
 
 
lli calc(lli n,lli r)
{
	de=(de*r)%mod;
	nu=(nu*(n+r-1))%mod;
	lli d=power(de,mod-2);
    lli c =(nu*d)%mod;
 
	return c;
}
 
int main()
{
	int t;
	lli m,n,x;
	scanf("%d",&t);
	while(t--)
	{ lli c=1;
	nu=1;de=1;
		scanf("%llu%llu%llu",&n,&x,&m);
		for(lli i=1;i<=n;i++)
		{
			scanf("%lld",&a[i]);
 
 
		}
		for(lli j=1;j<=x;j++)
		{
		    a[j]=a[j]%mod;
		}
 
		m=m%mod;
 
		lli sum=a[x];
		if(x==1)
		{
			printf("%llu\n",a[1]);
		}
		else
		if(x==2)
		{
 
		 lli ans=(m*a[1]+a[2])%mod;
		 printf("%llu\n",ans);
	   }
	   else
		{
 
		for(lli j=1;j<x;j++)
		{
			c=(calc(m,j)*a[x-j])%mod;
			sum=(sum+c)%mod;
		}
		printf("%llu\n",sum);
	  }
	}
	return 0;
}
