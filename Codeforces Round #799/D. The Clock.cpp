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
    ll x,y,k;
    char s;
    cin>>x>>s>>y>>k;

    ll h=k/60, m=k%60;
    map<string,ll>p;
    ll cnt=0;

    for(int i=0;i<=1440;i++)
    {
        ll h1=x+h,m1=y+m;
        if(m1>=60)
        {
            h1++;
        }
        x=h1%24; y= m1%60;
        string h2,m2;
        h2=to_string(x),m2=to_string(y);
        string h3,m3;
        if(h2.size()==1)
        {
            h3+='0';
            h3+=h2;
            h2=h3;
        }
        if(m2.size()==1)
        {
            m3+='0';
            m3+=m2;
            m2=m3;
        }
        string res=h2+m2;
        if(p[res]!=0)
        {
            break;
        }
        string res2=res;
        reverse(res.begin(),res.end());

        if(res==res2)
        {
            cnt++;
            p[res2]++;

        }



    }
    cout<<cnt<<nl;

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


