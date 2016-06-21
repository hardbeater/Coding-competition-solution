#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<cstring>
#define max 1000009
using namespace std;
int tree[max];
bool lazy[max];

void updaterange(int ss,int se,int i,int j,int si)
{

	
	if(lazy[si]==1)
	{

		
		tree[si]=(se-ss+1)-tree[si];
		
		if(ss!=se)
		{
			lazy[2*si+1]=!lazy[2*si+1];
			lazy[2*si+2]=!lazy[2*si+2];
		}
		
		lazy[si]=0;
	}
		if(ss>se||j<ss||i>se)
	{
		return;
	}
	if(i<=ss&&j>=se)
	{
		tree[si]=(se-ss+1)-tree[si];
		
		if(ss!=se)
		{
				lazy[2*si+1]=!lazy[2*si+1];
			lazy[2*si+2]=!lazy[2*si+2];
		}
		
		return;
	}
	
	int mid=(ss+se)/2;
	
	updaterange(ss,mid,i,j,2*si+1);
	updaterange(mid+1,se,i,j,2*si+2);
	
	tree[si]=tree[2*si+1]+tree[2*si+2];
	
}
int getquery(int ss,int se,int i,int j,int si)
{
	if(ss>se||j<ss||i>se)
	{
		return 0;
	}
	
	if(lazy[si]==1)
	{
	
		
		tree[si]=(se-ss+1)-tree[si];
		
		if(ss!=se)
		{
				lazy[2*si+1]=!lazy[2*si+1];
			lazy[2*si+2]=!lazy[2*si+2];
		}
		
		lazy[si]=0;
	}
	
	if(i<=ss&&j>=se)
	{
		return tree[si];
	}
	
	int mid=(ss+se)/2;
	
	int ans= getquery(ss,mid,i,j,2*si+1)+getquery(mid+1,se,i,j,2*si+2);
	
	return ans;
	
}


int main()
{
	memset(tree,0,sizeof(tree));
	memset(lazy,0,sizeof(lazy));
	
int n,q,query,i,j;

scanf("%d%d",&n,&q);

while(q--)
{
	
	scanf("%d%d%d",&query,&i,&j);
	
	if(query==0)
	{
		updaterange(0,n-1,i,j,0);
	
	}
	
	else{
		
	int c=	getquery(0,n-1,i,j,0);
	
	printf("%d\n",c);
	
	}
}


	return 0;
}
