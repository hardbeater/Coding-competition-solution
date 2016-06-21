#include<iostream>
#include<stdio.h>
using namespace std;
#define lint long long int
lint coin(lint n)
 {
 	lint z;
	if(n<12||n==0)
	{
		return n;
	}
    
    	z=coin(n/2)+coin(n/3)+coin(n/4);
    	return z;

	
}
int main()
{
	lint n;
	lint s;
	for(int i=0;i<1;i++)
	{
		scanf("%lld",&n);
			s=coin(n);
	   cout<<s<<endl;
	}
	return 0;
}

