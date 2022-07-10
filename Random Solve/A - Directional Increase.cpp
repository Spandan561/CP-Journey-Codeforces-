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
ll ceill(ll x,ll y)
{
    if(x%y==0)
    {
        return x/y;
    }
    return x/y+1;
}





void body()
{
   ll n; cin>>n;
   vector<ll>v1;
   for(ll i=0;i<n;i++)
   {
       ll x; cin>>x;
       v1.pb(x);
   }
   ll m=-1;
   for(ll i=v1.size()-1;i>=0;i--)
   {
       if(v1[i]!=0)
       {
           m=i;
           break;
       }
   }
   if(m==-1)
   {
       YES;
       return;
   }
   ll sum=0;
   bool flag=true;
   for(ll i=m;i>0;i--)
   {
       sum+=v1[i];

       if(sum>=0)
       {
           flag=false;
           break;
       }
   }
   sum+=v1[0];
   //cout<<sum<<nl;
   if(sum!=0) flag=false;
   if(flag==true) YES;
   else NO;


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


