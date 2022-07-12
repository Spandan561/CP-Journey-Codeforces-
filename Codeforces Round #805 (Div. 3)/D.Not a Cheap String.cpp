/**THE FUTURE IS UNPREDICTABLE. SO, BE REMEMBERED THROUGH THE LOVE YOU GIVE & GET. NOT FORGOTTEN FOR HATE OR JUDGEMENT**/
/**Man can do everything,if he is determined. Cause man is not made for defeat, man can be destroyed but not defeated**/

/****************************************
**     Solution by Baspannissu         **
****************************************/

#include<bits/stdc++.h>
#include<stdio.h>
#include <algorithm>
#include <string.h>

#define  ll         long long
#define  llu        unsigned long long

#define  pi         ((2.0)*acos(0.0))
#define  pb         push_back
#define  pf         push_front
#define  eb         emplace_back
#define  mp         make_pair
#define  all(x)     (x).begin(),(x).end()
#define  X          first
#define  Y          second

/*loop*/
#define  spa(i,p,n,m)   for(ll i=n;i<m;i+=p)
#define  den(i,n,m)     for(int i=n;i>=m;i--)
#define  bas(i,p,n,m)   for(ll i=n;i<=m;i+=p)

/*output shortcuts*/
#define  nl         "\n"
#define  Yes        cout<<"Yes\n"
#define  yes        cout<<"yes\n"
#define  YES        cout<<"YES\n"
#define  No         cout<<"No\n"
#define  no         cout<<"no\n"
#define  NO         cout<<"NO\n"
#define take(n)     scanf("%d",&n)
#define give(n)     printf("%d\n",n)

#define  fastio     ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using namespace std;
ll fib[50];
void fibo_make()
{

    ll x=0;ll y=1;
    fib[0]=x;fib[1]=y;
    for(ll i=2;i<50;i++)
    {
        fib[i]=fib[i-1]+fib[i-2];
    }
}

ll mod(ll b,ll p, ll m)
{
    if(p==0)
    {
        return 1;
    }
    else if(p%2==0)
    {
        ll x = (mod(b,p/2,m)%m);
        return (x*x)%m;
    }
    else if(p%2==1)
    {
        ll x = b;
        ll y = (mod(b,p-1,m)%m);
        return (x*y)%m;
    }
}

void body()
{
    string s;
    ll m; cin>>s>>m;
    vector<pair<char,ll>>v1;
    vector<pair<char,ll>>v2;
    ll sum=0;
    for(ll i=0;i<s.size();i++)
    {
        sum+=(s[i]-'a'+1);
        v1.pb(mp(s[i],s[i]-'a'));
        v2.pb(mp(s[i],i));
    }
    //cout<<sum<<nl;
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    string p="";
    ll q=v1.size();
    if(v1[0].second>m)
    {
        cout<<p<<nl;
    }
    else if(sum<=m)
    {
        cout<<s<<nl;
    }

    else
    {
        for(ll i=v1.size()-1;i>=0;i--)
        {
            if(sum<=m)
            {
                break;
            }
            sum-=(v1[i].second+1);
            q=i;
        }
        vector<pair<ll,char>>v3;
        for(ll i=0;i<q;i++)
        {
            v3.pb(mp(v2[i].second,v1[i].first));
        }
        sort(v3.begin(),v3.end());
        for(ll i=0;i<v3.size();i++)
        {
            p+=v3[i].second;
        }
        cout<<p<<nl;
    }

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;cin>>t;
    //body();


    while(t--)
    {
        body();
    }

    return 0;



}


