#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
	ll t,n,c;
	scanf("%lld",&t);
	while(t--)
    {
    	scanf("%lld%lld",&n,&c);
    	if(n==1)
    	{
    		
    		printf("Yes\n");
		}
		else
		{
		
    	ll k=2*(c);
    	
    	if(n==c||c<n)
    	{
    		printf("No\n");
		}
	
		else
		{ 
	int count=0;
		for(int i=1;i<=2;i++)
		{
			if((k-((n)*(n-1)*i))>0&&(k-((n)*(n-1)*i))%(2*n)==0)
			{
				count++;
			}
		}
		if(count!=0)
		{
			printf("Yes\n");
		}
		else
		{
			printf("No\n");
		}
		}
	}
		
	}
	
	return 0;
}
