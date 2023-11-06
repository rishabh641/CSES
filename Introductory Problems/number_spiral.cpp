#include<bits/stdc++.h>
using namespace std;
 
#define ll long long int 
 
 
void solve()
{
	ll x,y;
	cin>>x>>y;
	ll ans_x, ans_y; 
	if(x%2==0)
	{
		ans_x = x*x - (y-1);
	}
	else
	{
		ans_x=(x-1)*(x-1) + 1 + (y-1);
	}
	
	if(y%2==1)
	{
	    ans_y = y*y - (x-1);
	}
	else
	{
	    ans_y = (y-1)*(y-1) + 1 + (x-1); 
	}
	cout<<max(ans_x, ans_y)<<endl;
}
 
 
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		solve();
	}
	return 0;
}
