#include<bits/stdc++.h>
#define li unsigned long long int
#define m 100000
const li mod =1000000007;
using namespace std ;
 
li a[m+10];
li mulr[m+10];
long double fdigit[m+10];
 
 
li invmod(li a,li b)
{
      li res =1;
    while(b>0)
	 {
        if( b % 2 != 0) 
		{
            res = (res*a) % mod;
        }
        a =(a*a)%mod;
        b/=2;
    }
   
    return res;
 }
 
 li update(li p,li f,li n)
 { 
 li gm=sqrt(n)+1;
 		if(p==1)
    	{
    	long double lo=log10(f+0.0)-log10(a[1]+0.0);
    	 li g=(invmod(a[1],mod-2)*f)%mod;
 	 for(li i=1;i<=gm;i++)
 	 {
	 			mulr[i]=(mulr[i]*g)%mod;
	 			fdigit[i]+=(lo+0.0);
	  }
 
	 
	   	
	 }
	 else
	 {
	 long double val=log10(f+0.0)-log10(a[p]+0.0);
	  li g=(invmod(a[p],mod-2)*f)%mod;
	 	for(li i=1;i<=min(p,gm);i++)
	 	{
	 		if((p-1)%i==0)
	 		{   
 	 	         
	 			mulr[i]=(mulr[i]*g)%mod;
	 			fdigit[i]+=(val+0.0);
			 }
		 }
		 
	 }
 	a[p]=f;
 }
 li store(li n)
 { 
   int pw=sqrt(n)+1;
 	for(li i=1;i<=pw;i++)
 	{ 
	  mulr[i]=1;
 	   fdigit[i]=0.0;
 	   
 		for(li j=1;j<=n;j+=i)
 		{
 			mulr[i]=(mulr[i]*a[j])%mod;
 		
 			fdigit[i]+=log10(a[j]+0.0);
		 }
	 }
 }
  
 
 
int main()
{
	memset(mulr,0,sizeof(mulr));
	memset(a,0,sizeof(a));
	memset(fdigit,0.0,sizeof(fdigit));
	
	li n,q,k,p,f,r;
	scanf("%llu",&n);
	printf("%llu\n",invmod(3,mod));
	
	for(li i=1;i<=n;i++)
	{
		scanf("%llu",&a[i]);
	}
	
	store(n);
	scanf("%llu",&q);
	
	while(q--)
	{
	     
			int gm=sqrt(n)+1;
		scanf("%llu",&k);
		li ans=0;
		int firstdigit=0;
		if(k==1)
		{
			scanf("%llu%llu",&p,&f);
		update(p,f,n);
 
		}
		else
		{
		     scanf("%llu",&r);
		     if(r<=gm)
			{
			
			 ans=mulr[r];
		      firstdigit=(int)(pow(10.0,(fdigit[r]-floor(fdigit[r])+0.0))+1e-11);
		     
	       	}
	       	
		   else
		  {
		  
		  li mul=1;
		long double w=0.0;
			for(int i=1;i<=n;i+=r)
			{
				mul=(mul*a[i])%mod;
				w+=log10(a[i]+0.0);
			}
		    ans=mul;
		    firstdigit=(int)(pow(10.0,(w-floor(w)+0.0))+1e-11);
			 
			
	      }
		if(firstdigit>=10)
		     {
		     	firstdigit/=10;
			 }
		 
		
	      printf("%d %llu\n",firstdigit,ans);
		
		}
		
	}
	
	return 0;
}  
