#include<bits/stdc++.h>
using namespace std;

int main()
{
	long double t,u,v,w,a,b,c,x,y,z,sqr,ans;
	scanf("%Lf",&t);
	while(t--)
	{
		scanf("%Lf%Lf%Lf%Lf%Lf%Lf",&a,&b,&w,&c,&v,&u);
		cout<<a<<" "<<b<<" "<<w<<" "<<c<<" "<<v<<" "<<u<<endl;
		x=(v*v)+(w*w)-(a*a);
		y=(u*u)+(w*w)-(b*b);
		z=(v*v)+(u*u)-(c*c);
		cout<<x<<" "<<y<<" "<<z<<endl;
		ans=(sqrtl((w*w)*((4.0L*(u*u*v*v))-(z*z))+(x*y*z)-(u*u*x*x)-(v*v*y*y)))/12.0L;
		cout<<ans<<endl;
		printf("%.4Lf\n",ans);
	}
	return 0;
}
