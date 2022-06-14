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

void body()
{
    char ch[8][8];
    for(ll i=0;i<8;i++)
    {
        for(ll j=0;j<8;j++)
        {
            cin>>ch[i][j];
        }
    }
    vector<pair<ll,ll>>v1,v2;

    for(ll i=0;i<8;i++)
    {
        for(ll j=0;j<8;j++)
        {
           if(ch[i][j]=='#')
           {
               v1.pb(mp(i+1,j+1));
               //v2.pb(mp(j+1,i+1));
           }
        }
    }
    sort(v1.begin(),v1.end());
    //sort(v2.begin(),v2.end());
    vector<ll>v3,v4;

    for(ll i=1;i<v1.size();i++)
    {
        if(v1[i-1].first==v1[i-2].first && v1[i+1].first==v1[i+2].first && v1[i].first!=v1[i-1].first && v1[i].first!=v1[i+1].first)
        {
           cout<<v1[i].first<<" "<<v1[i].second<<nl;
           break;
        }
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


