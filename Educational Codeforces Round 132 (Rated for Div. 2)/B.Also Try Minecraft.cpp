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
int sqr(int x)
{
    if(x==0 || x==1)
    {
        return x;
    }
    int cnt=1, ans=1;
    while(ans<=x)
    {
        cnt++;
        ans = cnt*cnt;
    }
    return cnt-1;
}
ll x[1000007];
void seive()
{

    x[0]=x[1]=0;
    ll n=1000007;
    //int s= sqrt(n);
    for(int i=2;i<=n;i++)
    {
        x[i]=1;
    }
    int s=sqrt(n);
    for(int i=2;i<=s;i++)
    {
        if(x[i]==1)
        {
            for(int j=i*i;j<=n;j+=i)
            {
                x[j]=0;
            }
        }
    }

}
void body()
{
    ll n,m; cin>>n>>m;
    ll a[n+1];
    vector<ll>v1,v2;
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }
    v1.pb(0);
    ll cnt=0;
    for(ll i=1;i<n;i++)
    {
        if(a[i]<a[i-1])
        {
            cnt+=(a[i-1]-a[i]);
        }
        v1.pb(cnt);
        //cout<<cnt<<nl;
    }
    v2.pb(0);

    cnt=0;

    for(ll i=n-2;i>=0;i--)
    {
        if(a[i]<a[i+1])
        {
            cnt+=(a[i+1]-a[i]);
        }
        v2.pb(cnt);
    }
    reverse(v2.begin(),v2.end());


    //cout<<nl;

    while(m--)
    {
        ll x,y;
        cin>>x>>y;
        if(y>x)
        {
            cout<<v1[y-1]-v1[x-1]<<nl;
        }
        else if(x>y)
        {
            cout<<v2[y-1]-v2[x-1]<<nl;
        }
        else
        {
            cout<<0<<nl;
        }
    }



}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    //ll t;cin>>t;
    body();

/*
    while(t--)
    {
        body();
    }
*/

    return 0;



}


