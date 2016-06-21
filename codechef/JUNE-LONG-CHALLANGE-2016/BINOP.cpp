#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<cstring>
#define li long int
#define m 1000000
using namespace std ;
char a[m+2];
char b[m+2];
char c[m+2];

int main()
{
	li t;
	scanf("%ld",&t);
	while(t--)
	{  
	memset(a,0,sizeof(a));
	memset(b,0,sizeof(b));
	memset(c,0,sizeof(c));
	
	li n,no,z,k;
	
		li j=0;
		
		scanf("%s",&a);
		scanf("%s",&b);
		
		n=strlen(a);
		a[n]='/0';
	cout<<"n "<<n<<endl;
	lli countr=0;
		for(li i=0;i<n;i++)
		{
			if(i<n-1&&a[i]==a[i+1])
			{
				countr++;
			}
			z=(a[i]-'0')^(b[i]-'0');
			cout<<"Z "<<z<<endl;
			if(z==1)
			{
				cout<<"j "<<j<<endl;
				c[j]=a[i];
				
				j+=1;
				
				cout<<"c "<<c[j]<<endl;
			}
		}
		
		 no=strlen(c);
		 
		 cout<<"no "<<no<<endl;
		li count=0;
		
		for(li i=0;i<no;i++)
		{
			if(c[i]=='1')
			{
				count++;
			}
		}
		cout<<"count "<<count<<endl;
		if(countr==n-1)
		{
			printf("Unlucky Chef\n");
		}
		
		else
		{
			k=(count>=no-count)?count:no-count;
			printf("Lucky Chef\n");
			printf("%ld\n",k);
		}
		
	}
	
	return 0;
}

