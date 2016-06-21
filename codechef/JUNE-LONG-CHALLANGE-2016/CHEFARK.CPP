#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<cstring>
#define li long long int
#define m 100000
long long int mod =1000000007;
using namespace std ;
li de,nu;
li a[m+10];
li invmod(li a,li b)
{
      li res = 1;
    while(b > 0) {
        if( b % 2 != 0) {
            res = (res * a) % mod;
        }
        a = (a * a) %mod;
        b /= 2;
    }
   
    return res;
 }
 
 li ncr(li n,li r)
{
	de=((de*r)%mod*(r-1))%mod;
	nu=((nu*(n-r+1))%mod*(n-r+2))%mod;
	li d=invmod(de,mod-2);

    li c =(nu*d)%mod;
 
	return c;
}
li ncc(li k,li f)
{
	de=(de*f)%mod;
	nu=(nu*(k-f+1))%mod;
	li d=invmod(de,mod-2);

    li p =(nu*d)%mod;
 
	return p;
}
int main()
{
	li t,n,k;
	scanf("%lld",&t);
	while(t--)
	{
	nu=1;de=1;
		li ans=0;
		li no=0;
		scanf("%lld%lld",&n,&k);
		li count=0;
		for(li i=0;i<n;i++)
		{
			scanf("%lld",&a[i]);
			if(a[i]==0)
			{
				count++;
			}
		}
		no=n-count;
		if(n==1)
		{
			ans=1;
		}
		else
		if(k==1)
		{
			ans=(count>=1)?no+1:no;
		}
		else
		{
		
		
		if(k>=no)
		{ li power=1;
		   for(li i=1;i<=no-1;i++)
		   {
		   	power=(2*power)%mod;
		   	
		   }
		  ans=(count>=1)?(2*power)%mod:power;
		}
		else
		if(count==0)
		{
			li j=(k%2==0)?2:3;
			li sum=(j==2)?1:no;
			li c=1;
			nu=(j==2)?1:no;
			de=1;
			while(j<=k)
			{
				c=ncr(no,j);
				sum=(sum+c)%mod;
				j+=2;
			}
				ans=sum;                                                                                                             
		}
		else{
		    li f=1;
		    li sum1=1;li z=1;
		    while(f<=k)
			{
				z=ncc(no,f);
				sum1=(sum1+z)%mod;
				f+=1;
			}
		    ans=sum1;
		   }
		}
	
	
		 
		printf("%lld\n",ans);
		
	}
	
	return 0;
}
