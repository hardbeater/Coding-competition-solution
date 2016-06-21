#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<cstring>
#define li unsigned long long int
using namespace std ;

int main()
{
	li t,n,c,r,x;
	scanf("%llu",&t);
	while(t--)
	{
		li flag=1;
		scanf("%llu",&n);
		scanf("%llu%llu%llu",&r,&c,&x);
		int k=x%2;
		int l=(abs((r-c)%2));
		int p=l^k;
		n=n-1;
		while(n--)
		{
			scanf("%llu%llu%llu",&r,&c,&x);
			int d=abs((r-c)%2);
			int no=(x+p)%2;
			if((d==0&&no==0)||(d==1&&no==1))
			{
				flag++;
			}
		}
		cout<<"flag "<<flag<<endl;
		if(flag==n+1)
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

