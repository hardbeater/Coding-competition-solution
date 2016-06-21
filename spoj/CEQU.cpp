#include<iostream>
#include<cmath>
#define ll unsigned long long
using namespace std;
ll int gcd (ll int a,ll int b)
{
    ll int c;

    if ( b == 0 )
       {
        return a;}

    else
        while ( b != 0 )
        {
            c = b;
            b = a % b;
            a = c;
        }
        



	return a;
        
    }
    int main()
    {
    	ll int t,a,b,c,d;
    	cin>>t;
    	for(ll i=1;i<=t;i++)
    	{
    		cin>>a>>b>>c;
    		
    	
			
    		d=gcd(a,b);
    		if(c%d==0)
    		{
    			cout<<"Case "<<i<<": "<<"Yes"<<endl;
    			
    		}
    		
    		
    		else
    		{
    				cout<<"Case "<<i<<": "<<"No"<<endl;
    		}
    		
    	cout<<endl;	
    	}
    	
    	return 0;
    
    }
    
