#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
 long long int combination(int n,int r)
{
     if(n==r)
	{
			return 1;
		}
	if(r==0)
	{
			return 1;}
	if(r==1 || r==n-1)
	{
			return n;}
	
	long long int ans=1;
	
	int i=1;
	if(r > n/2)
	{
	r = n-r;
}
	int x=n,y=1;
	
	while(i<=r){
		ans *= x;
		ans /= y;
		y++;
		x--;
		i++;
	}
	return ans;
}
int main()
{
	int t,n,r;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d",&n,&r);
		n=n-r;
		printf("%lld\n",combination(n+r-1,r-1));
	}
	return 0;
} 
