#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<cstring>
using namespace std ;
char str[1000002];

 
   
   int checkall9s(char str[],int n)
  {
     	int count = 0;
  	for(int i=0;i<n;i++)
  	{
  	
  		if(str[i]!='9')
  		{
  			count ++;
		  }
		  
	  }
	  return count;
  }
  
  
  int printstring(char str[],int n)
  {
  	
  	 
   
        printf("%s",str);

	printf("\n");
  }
  
  
  int carry(char str[],int n,int mid)
  {
  	int no=0;
  	int nu=0;
  	int i=0;
  	int j=0;
       j=mid+1;
  		int carry =1;
	 	if(n%2==0)
	 	{
	 		no=str[mid-1]-'0';
	 		no +=carry;
	 		carry=no/10;
	 		no %=10;
	 		str[mid-1]=char(int(48+no));
	 		str[mid]=str[mid-1];
	 		i=mid-2;
	 	
	 		
		 }
		 else{
		 	no =str[mid]-'0';
		 	no +=carry;
	 		carry=no/10;
	 		no %=10;
	 		str[mid]=char(int(48+no));
	 		i=mid-1;
	 	
		 }
		 
		 
		 while(i>=0)
		 {
		 	
		 	str[i]=char(int(48+((str[i]-'0')+carry)));
	 		carry=(str[i]-'0')/10;
	 		nu=(str[i]-'0')%10;
	 		str[i]=char(int(48+nu));
	 		str[j]=str[i];
	 		i--;
	 		j++;
		 }
		 
  }
int generatepalindrome(char str[],int n)
 {			int mid=0;
            int i=0;
            int j=0;
 	 mid=n/2;
 	 i=mid-1;
 	 j=(n%2==0)?mid:mid+1;
 	
 	while(i>0&&str[i]==str[j])
 	{
	 i--;
 		j++;
 	
	 }
	 if(str[i]==str[j]||str[i]<str[j])
	 {
	  carry(str,n,mid);
	}
	 else
	 {
		 
	 	while(i>=0)
	 	{
	 		str[j]=str[i];
	 		j++;
	 		i--;
		 }
	   
	 }
   
 }
 
 int check( char str[], int n )
{
    if( checkall9s( str, n )==0 )
    {
        printf( "1");
        for(int i = 1; i <= n-1; i++ )
           {
			 printf( "0" );
		}
        printf("1\n" );
        
    }
 
   
    else
    {
         generatepalindrome( str, n );
 
        
        printstring (str,n);
    }
    
}
 
 
 int main()
   
   {
   	int t=0;
	   int n=0;
   
   	scanf("%d",&t);
   	
   	
   	while(t--)
   	{
   		
   		scanf("%s",&str);
   		int n = strlen(str);
   	     
   	     check(str,n);
		
	   }
   
   	
   	return 0;
}
 
