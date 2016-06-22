#include<bits/stdc++.h>
using namespace std;
 #define li unsigned long long int 
 int main()
 {
 	li t,r,c,m,k,j;
 	scanf("%llu",&t);
 	while(t--)
 	{
 		scanf("%llu%llu%llu%llu%llu",&r,&c,&m,&k,&j);
 		li ar=r*c;
 		if(ar!=m+k+j)
 		{
 			printf("No\n");
		 }
		 else
		 {
		 	if(m%c==0&&k%c==0&&j%c==0)
		 	{
		 		printf("Yes\n");
			 }
			 else
			 if(m%r==0&&k%r==0&&j%r==0)
		 	{
		 		printf("Yes\n");
			 }
			 else
		 	if(m%c==0&&k%(r-m/c)==0)
		 	{
		 		printf("Yes\n");
			 }
			 else
			 if(k%c==0&&j%(r-k/c)==0)
		 	{
		 		printf("Yes\n");
			 }
			 else
			 if(j%c==0&&k%(r-j/c)==0)
		 	{
		 		printf("Yes\n");
			 }
			 else
			 	if(m%r==0&&j%(c-m/r)==0)
		 	{
		 		printf("Yes\n");
			 }
			 else
			 if(k%r==0&&j%(c-k/r)==0)
		 	{
		 		printf("Yes\n");
			 }
			 else
			 if(j%r==0&&k%(c-j/r)==0)
		 	{
		 		printf("Yes\n");
			 }
			 else
			 {
			 	printf("No\n");
			 }
		 }
	 }
	 return 0;
 }
