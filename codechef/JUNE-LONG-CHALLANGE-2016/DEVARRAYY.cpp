#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<cstring>
#define lli long long int
using namespace std ;

lli a[100002];
int main()
{
	lli n,q,t;
	scanf("%lld%lld",&n,&q);
	for(lli i=0;i<n;i++)
	{
		scanf("%lld",&a[i]);
		
	}
	sort(a,a+n);
	while(q--)
	{
		scanf("%lld",&t);
		if(a[0]<=t&&a[n-1]>=t)
		{
			printf("Yes\n");
		}
		else
		{
			printf("No\n");
		}
	}
	return 0;
}

