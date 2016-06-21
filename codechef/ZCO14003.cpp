#include<bits/stdc++.h>
using namespace std;
#define ll unsigned long long int
ll a[500005];
int main()
{
	memset(a,0,sizeof(a));
	ll n;
	scanf("%llu",&n);
	ll i=0;
	for(ll j=0;j<n;j++)
	{
		scanf("%llu",&a[j]);
		
	}
	sort(a,a+n);
	ll rev=a[n-1];
	for(int i=n-2;i>=0;i--)
	{
		rev=max(rev,(a[i]*(n-i)));
	}
	printf("%llu\n",rev);



	return 0;
}
