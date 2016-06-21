#include<iostream>
#include<cmath>
using namespace std;
#define ll unsigned long long int

int main()
{

	ll t,a,b;
	scanf("%llu",&t);
	
	while(t--)
	{
		scanf("%llu%llu",&a,&b);
		
		
		
			ll c=(b%4==0&&b!=0)?4:b%4;
			ll ans=pow(a%10,c);
			printf("%llu\n",ans%10);
		
		
	}



	return 0;
}
