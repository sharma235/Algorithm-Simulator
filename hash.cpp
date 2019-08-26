#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds; 
#define pb push_back
#define mp make_pair
#define ld double
#define int long long
#define f(i,x,n) for(int i=x;i<n;i++)
#define modd 998244353
#define endl "\n"
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
void fastio()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
}
map<pair<pair<int,int>,pair<int,int>>,int>mpp;
const int m1=29,M1=31,mod=1000000007,Mod=1000000009;
int32_t main()
{	
	fastio();
	string s[n];
	f(i,0,n)
	{
		int nn=s[i].length();
		int v1=0,v2=0;
		f(j,0,nn)
		{
			int t1,t2;
			t1=(v1*m1+(s[i][j]-'a'+1))%mod;
			t2=(v2*M1+(s[i][j]-'a'+1))%Mod;
			vc.pb(mp(t1,t2));
			v1=t1;
			v2=t2;
		}
	}
}