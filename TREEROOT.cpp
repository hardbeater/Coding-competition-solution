#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
	int id,sum,n,t;
	int root=0;

     scanf("%d",&t);
     while(t--)
     {
     	scanf("%d",&n);
     	while(n--)
     	{
     		scanf("%d%d",&id,&sum);
     		root =root+id-sum;
		 }
		 printf("%d\n",root);
	 }
     return 0;
}
