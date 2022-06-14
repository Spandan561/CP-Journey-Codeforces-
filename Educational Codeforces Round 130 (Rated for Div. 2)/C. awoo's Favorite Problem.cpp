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
    string s,s1,t,t1; cin>>s>>t;
    t1="",s1="";
    vector<ll>indxas,indxat,indxcs,indxct;
    ll cntbs=0,cntbt=0;

    for(ll i=0;i<n;i++)
    {
        if(s[i]=='a')
        {
            indxas.pb(i);
            s1+=s[i];
        }
        else if(s[i]=='c')
        {
            indxcs.pb(i);
            s1+=s[i];
        }
        if(t[i]=='a')
        {
            indxat.pb(i);
            t1+=t[i];
        }
        else if(t[i]=='c')
        {
            indxct.pb(i);
            t1+=t[i];
        }
        if(s[i]=='b')
        {
            cntbs++;
        }
        if(t[i]=='b')
        {
            cntbt++;
        }
    }
    bool flag=true;
    //cout<<indxct.size()<<" "<<indxas.size()<<endl;

    if(s1==t1)
    {
        for(ll i=0;i<indxct.size();i++)
        {
            if(indxct[i]>indxcs[i])
            {
                flag=false;
                break;
            }

            //cout<<indxcs[i]<<" "<<indxct[i]<<endl;
        }
        for(ll i=0;i<indxas.size();i++)
        {
            if(indxat[i]<indxas[i])
            {
                flag=false;
                break;
            }
            //cout<<indxas[i]<<" "<<indxat[i]<<endl;
        }
        //cout<<cntbt<<" "<<cntbs<<endl;
        if(cntbt!=cntbs)
        {
            flag=false;
        }
    }
    else
    {
        flag=false;
    }

    if(flag==true)
    {
        YES;
    }
    else
    {
        NO;
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


