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
    ll n,s; cin>>n>>s;
    ll a[n+3];
    ll sum=0;
    vector<ll>v1;
    v1.pb(0);

    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
        if(a[i]==1) v1.pb(i+1);
    }
    v1.pb(n+1);
    if(s>sum)
    {
        cout<<-1<<nl;
        return;
    }
    if(sum==s)
    {
        cout<<0<<nl;
        return;
    }

    ll cnt=-1;
    for(ll i=0;i<v1.size()-s-1;i++)
    {
        cnt = max(cnt,v1[i+s+1]-v1[i]-1);

    }

    /*
    for(ll i=0;i<v1.size();i++)
    {
        if(v1[i]-v1[j]==s+1)
        {
            //cout<<i<<" "<<j<<nl;
            j++;
        }
        else if(v1[i]-v1[j]==s)
        {
            if(a[i]==1 && a[i+1]==0)
            {
                dnt=max(i-j,dnt);
            }
            else
            {
                dnt=max(i-j-1,dnt);
            }
        }

    }
    */
    //dnt+=2;
    cout<<n-cnt<<nl;




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


