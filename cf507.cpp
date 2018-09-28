#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define ld long double
#define vec vector<ll>
#define ms multiset<ll>
#define pr pair<ll,ll>
#define f(i,x,n) for(i=x;i<n;i++)
ll min(ll a,ll b)
{
	if(a<b)
		return a;
	else return b;
}
void fastio()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
int main()
{   fastio();

    ll n,h;
    cin >> n >> h;
    ll i,st[n],ed[n];
    f(i,0,n)
    cin >> st[i] >> ed[i];
    vector<pr>vc;
    f(i,0,n)
    {   if(i<n-1)
    	vc.pb(mp(ed[i]-st[i],st[i+1]-ed[i]));
    	else
    		vc.pb(mp(ed[i]-st[i],-1));


    }
    ll pt=0,ans=0,ctan=0,cca=0;
    for(i=0;i<n;i++)
    {
    	if(ctan<h)
    	{   if(i==n-1)
    		{
    			ans=ans+vc[i].first;
    			if(cca<ans)
    				cca=ans;

    		}
    		else
    		{
    		ctan=ctan+(vc[i].second);
    		ans=ans+vc[i].first;}
    	}
    	else
    	{
    		if(ans>cca)
    			cca=ans;
    		ans=ans-vc[pt].first;
    		ctan=ctan-vc[pt].second;
    		pt++;
    		i--;
    	}



    }
    cout << cca+h;

     
}