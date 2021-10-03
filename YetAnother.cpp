
	#include <bits/stdc++.h>
	#include <cstdio>
	#include <cstring>
	#include <cmath>
	#include <cstring>
	#include <chrono>
	#include <complex>
	#define endl "\n"
	#define ll long long int
	#define vi vector<int>
	#define vll vector<ll>
	#define vvi vector < vi >
	#define pii pair<int,int>
	#define pll pair<long long, long long>
	#define mod 1000000007
	#define inf 1000000000000000001;
	#define all(c) c.begin(),c.end()
	#define mp(x,y) make_pair(x,y)
	#define mem(a,val) memset(a,val,sizeof(a))
	#define eb emplace_back
	#define f first
	#define s second
	
	using namespace std;
	int main()
	{
		int n,q;
		cin>>n>>q;
		vi color;

		for(int i=0;i<n;i++){
			int a;
			cin>>a;
			color.push_back(a);
		}
		for(int i=0;i<q;i++){
			int a;									//3211431 2311 12314
			cin>>a;
			vector<int>::iterator it;

			it=find(color.begin(),color.end(),a);	//because of find worst case time complexity is O(N^2)
			rotate(color.begin(),it,it+1);		
			int x=it-color.begin()+1;
			cout<<x<<" ";
			// int temp=color[x-1];
			// color.erase(it);
			// color.insert(color.begin(),(temp));

		}

		return 0;
	}
