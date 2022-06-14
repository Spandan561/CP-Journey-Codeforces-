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
    ll n; cin>>n;
    vector<ll>a(n);
    vector<ll>m;
    set<ll>s;

    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
        s.insert(a[i]);
        //m[a[i]]++;
    }
    if((n-s.size())%2==1)
    {
        cout<<s.size()-1<<nl;
    }
    else
    {
        cout<<s.size()<<nl;
    }
    /*
    sort(a.begin(),a.end());
    for(ll i=0;i<a.size();i++)
    {
        int cnt=1;
        while(i<n-1 && a[i]==a[i+1])
        {
            i++;
            cnt++;
        }
        m.pb(cnt);
    }
    sort(m.rbegin(),m.rend());
    ll sum=0;

    for(ll i=1;i<m.size();i++)
    {
        sum+=(m[i]-1);
    }
    ll xx = abs((m[0]-1)-sum);
    //cout<<m.size()<<" "<<sum<<" "<<xx <<nl;
    if(xx==0)
    {
        cout<<m.size()<<nl;
    }

    else
    {
        //cout<<1<<nl;
        ll p = m.size();
        if((p-xx)>0)
        {
            cout<<p-xx<<nl;
        }
        else
        {
            cout<<0<<nl;
        }
    }
    */



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


