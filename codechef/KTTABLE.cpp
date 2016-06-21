#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<cstring>
#define ll long int
using namespace std;

int a[10001];
int b[10001];
int main()
{
int n,t;
scanf("%d",&t);
while(t--)
{
	int z=0;
	int count=0;

scanf("%d",&n);
 for(int i=0;i<n;i++)
    {   
    	scanf("%d",&a[i]) ;
	}
	for(int i=0;i<n;i++)
    {   
    	scanf("%d",&b[i]) ;
	}

	if(b[0]<=a[0])
	{
		count++;
	
	}
	for(int i=0;i<n-1;i++)
    {   
    	z=a[i+1]-a[i]-b[i+1];
    	if(z>=0)
    	{
    		count++;
		}
	}
	printf("%d\n",count);
	
}
	return 0;
}
