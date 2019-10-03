#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll n;
	cin>>n; //Enter a number
	for(ll i=1;i<=n;i++)
	{
		if(n%i==0)   //if n is divisible by i then dispay it
		cout<<i<<" ";
	}
}
