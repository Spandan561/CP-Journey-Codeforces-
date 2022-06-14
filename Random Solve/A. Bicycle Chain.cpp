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

///sorting, greedy ,implementation
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
    ll n; cin>>n;
    vector<ll>a(n);
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }
    ll m; cin>>m;
    vector<ll>b(m);
    for(ll i=0;i<m;i++)
    {
        cin>>b[i];
    }
    ll mx = 0,cnt=0;

    for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<m;j++)
        {
            float temp = (b[j]*1.0)/(a[i]*1.0);
            ll temp2 = b[j]/a[i];
            if(temp==temp2)
            {
                if(temp2>mx)
                {
                    cnt=1;
                    mx=temp2;
                }
                else if(temp2==mx)
                {
                    cnt++;
                }

            }
        }
    }
    cout<<cnt<<nl;

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    //ll t;cin>>t;
    body();

    /*while(t--)
    {
        body();
    }*/
    return 0;



}


