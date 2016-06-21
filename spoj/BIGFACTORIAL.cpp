#include <iostream>

using namespace std;

class Factorial
{
private:
long n,l,a[1000];
public:
void input();
void compute();
void display();
};
void Factorial::input()
{


cin>>n;
}
void Factorial::compute()
{
long i,j,x,temp;



a[999]=1,l=1;
for(i=0;i<999;i++)
a[i]=0;
for(i=1;i<=n;i++)
{
x=0;
for(j=999;j>=999-l-2;j--)
{
temp=a[j];
a[j]=(temp*i+x)%10;
x=(temp*i+x)/10;
}
for(j=0;j<=999;j++)
{
if(a[j]!=0)
{
l=999-j+1;
break;
}
}
}

}
void Factorial::display()
{
long i;

for(i=999-l+1;i<=999;i++)
cout<<a[i];

}
int main()
{
	int t;
	cin>>t;
	for(int i=1;i<=t;i++)
	{
	
Factorial k;
k.input();
k.compute();
k.display();
cout<<endl;
}
return 0;
}
