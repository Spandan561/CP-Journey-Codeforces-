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

///brute force
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
    ll n,m; cin>>n>>m;
    ll a[n][m];

    for(ll i=0;i<n;i++)
    {

        for(ll j = 0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    ll mx=0;

    for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<m;j++)
        {
            ll sum=0;
            sum+=a[i][j];
            ll ii=i+1,jj=j+1;

            while(ii>=0 && jj>=0 && ii<n && jj<m)
            {
                sum+=a[ii][jj];
                ii++;
                jj++;
            }
            ii=i+1,jj=j-1;
            while(ii>=0 && jj>=0 && ii<n && jj<m)
            {
                sum+=a[ii][jj];
                ii++;
                jj--;
            }
            ii=i-1,jj=j+1;
            while(ii>=0 && jj>=0 && ii<n && jj<m)
            {
                sum+=a[ii][jj];
                ii--;
                jj++;
            }
            ii=i-1,jj=j-1;
            while(ii>=0 && jj>=0 && ii<n && jj<m)
            {
                sum+=a[ii][jj];
                ii--;
                jj--;
            }
            mx=max(mx,sum);
            //sum=0;
        }
    }

    cout<<mx<<endl;



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


