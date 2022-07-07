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
#define mx 10001

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

}





void body()
{
    ll n; cin>>n;
    ll a[n+1];
    vector<ll>b,c,d;

    for(ll i=0;i<n;i++)
    {
        ll x;
        cin>>x;
        if(x>0)
        {
            b.pb(x);
        }
        else if(x<0)
        {
            c.pb(x);
        }
        else
        {
            if(d.size()<2)
            {
                d.pb(x);
            }
        }
    }
    if(b.size()>2 || c.size()>2)
    {
        NO;
        return;
    }
    for(ll x:b)
    {
        d.pb(x);
    }
    for(ll x:c)
    {
        d.pb(x);
    }

    for(ll i=0;i<d.size();i++)
    {
        for(ll j=i+1;j<d.size();j++)
        {
            for(ll k=j+1;k<d.size();k++)
            {
                int flag=0;
                for(ll u=0;u<d.size();u++)
                {
                    if(d[i]+d[j]+d[k]==d[u])
                    {
                        flag=1;
                    }

                }
                if(flag==0)
                {
                    NO;
                    return;
                }
            }
        }
    }
    YES;

}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t; cin>>t;
    //printf("\n");
    //body();




    while(t--)
    {
        body();
    }


    return 0;



}


