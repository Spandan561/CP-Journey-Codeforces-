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
    ll n; cin>>n; vector<ll>a(n);

    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a.begin(),a.end());

    ll p=0,result=0;

    for(ll i=0;i<n;i++)
    {
        while(p<n && a[p]-a[i]<=5)
        {
            p++;
            result = max(p-i,result);
        }
    }
    cout<<result<<nl;


    /*
    vector<ll>v1(n),v2(n);
    v1[0]=0;
    v2[0]=0;
    for(ll i=1;i<n;i++)
    {
        ll x;
        if(v1[i-1] != -1) {x=(a[i]-a[i-1])+v1[i-1];} //cout<<x<<nl;}
        else x=a[i]-a[i-1];

        if(x>5)
        {
            v1[i]=-1;
        }
        else
        {
            v1[i]=x;
        }
    }
    ll cnt=0,mx=0;
    for(ll i=0;i<n;i++)
    {
        if(v1[i]==-1)
        {
            //mx=max(mx,cnt);
            cnt=1;
        }
        else
        {
            cnt++;
            mx=max(mx,cnt);
        }
        //cout<<v1[i]<<" ";
        //cout<<a[i]<<nl;
    }

    //cout<<nl;


      for(ll i=n-1;i>=1;i--)
        {
            ll x;
            if(v2[n-1-i] != -1) {x=(a[i]-a[i-1])+v2[n-1-i];} //cout<<x<<nl;}
            else x=a[i]-a[i-1];

            if(x>5)
            {
                v2[n-i]=-1;
            }
            else
            {
                v2[n-i]=x;
            }
        }
        ll cnt2=0,mx2=0;
        for(ll i=0;i<n;i++)
        {
            if(v2[i]==-1)
            {
                //mx=max(mx,cnt);
                cnt2=1;
            }
            else
            {
                cnt2++;
                mx2=max(mx2,cnt2);
            }
            //cout<<v2[i]<<" ";
            //cout<<a[i]<<nl;
        }

    //cout<<nl;
    cout<<max(min(mx,n),min(mx2,n))<<nl;
    */

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
    }*/
    return 0;



}

 
