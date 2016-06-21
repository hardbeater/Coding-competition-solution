#include<bits/stdc++.h>
using namespace std;
 
int main()
 
{
int t,n;
scanf("%d",&t);
while(t--)
{
	char a[100005];
scanf("%s",&a);
int n=strlen(a);
int sum=0;
for(int i=0;i<n;i++)
{
sum+=a[i]-'0';
 
}
 
if(sum<9&&n>1)
{ 
	printf("%d\n",(9-(sum%9)));
}
 
else
{
 
 
printf("%d\n",min((9-(sum%9)),sum%9));
}
}
 
return 0;
}  
