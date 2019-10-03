#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll n,m;
	cout<<"Enter dimensions of the two matrices to add\n";
	cin>>n>>m;  
	ll a[n][m],b[n][m];
	cout<<"enter first matrix:\n";     //Input matrix1
	for(ll i=0;i<n;i++)
	{
		for(ll j=0;j<m;j++)
		cin>>a[i][j];
	}
	cout<<"enter second matrix:\n";  //input matrix 2
	for(ll i=0;i<n;i++)
	{
		for(ll j=0;j<m;j++)
		cin>>b[i][j];
	}
	for(ll i=0;i<n;i++)   //subtract matrix 2 from matrix 1 and store in matrix 1
	{
		for(ll j=0;j<m;j++)
		a[i][j]-=b[i][j];
	}
	cout<<"difference:\n";
	for(ll i=0;i<n;i++)   //printing matrices
	{
		for(ll j=0;j<m;j++)
		cout<<a[i][j]<<" ";
		cout<<"\n";
	}
}
