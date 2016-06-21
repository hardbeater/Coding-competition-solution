#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<algorithm>
#include<cstring>
#define max 1000
using namespace std;
int tree[max+2];


int count(int number, int array[], int length) {
    if (length == 0) return 0;
    return (number == *array) + count(number, array+1, length-1);
}

int main()
{
	memset(tree,0,sizeof(tree));
	char str[10];
int n,k,d;
scanf("%d%d",&n,&k);


while(k--)
{
	int len=0;
  scanf("%s",&str);
 len=strlen(str) ;

 if(len==5 )
 {
 	scanf("%d",&d);
 	tree[d]=tree[d]^1;
 	
 }
 else{
        
      memset(tree,0,sizeof(tree));
    
   }
   
 int c = count(1, tree, n+1);

    printf("%d\n",c);
}


	return 0;
}
