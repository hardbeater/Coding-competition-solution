#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int t;int n;int j=1;
	unsigned long long int f=0;
	cin>>t;
	for(int i=1;i<=t;i++)
	{
		cin>>n;
		while(n/pow(5,j)!=0)
		{
			f=f+n/pow(5,j);
			j++;
		}
		cout<<f<<endl;
		f=0;j=1;
	cout<<endl;	
	}
	
	return 0;
}
