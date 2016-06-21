#include<iostream>
#include<set>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<cstring>
#define max 100000
using namespace std;
int color[max+1];




void printans(int a[], int size)
{
  if(find(a, size)==1)
  {
  
    printf("Yes\n");
  }
  else
  {
  
    printf("No\n");
  }
}
  

int find(int a[], int size)
{
    int index = 0; int count = 1;
    int i=1;
    while( i < size&&count<3)
    {
        if(a[index] == a[i])
           {
			   count++;
	       }
        else
            {
            	a[index]=a[i];
            	count=1;
			}
        
        i++;
    }
   
     if (count>=3)
      {
	   return 1;
      }
    else
    {
	
       return 0;
   }
}

  

int main()
{
	int t,n;
	scanf("%d",&t);
	while(t--)
	{
	
		scanf("%d",&n);
		
		

		for(int i=0;i<n;i++)
		{
			scanf("%d",&color[i]);
			
	}
		
		printans(color,n);
		
		
	
	
	}
	return 0;
}


