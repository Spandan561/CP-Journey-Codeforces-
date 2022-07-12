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
//#define mx 1e9

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
ll mx = 1e9+7;
ll arr[10001];
ll tree[300001][2];
void init(ll node, ll b, ll e)
{
    if (b == e) {
        tree[node][0] = arr[b];
        tree[node][1] = arr[b];
        return;
    }
    ll Left = node * 2;
    ll Right = node * 2 + 1;
    ll mid = (b + e) / 2;
    init(Left, b, mid);
    init(Right, mid + 1, e);
    tree[node][0] = tree[Left][0];
    tree[node][1] = tree[Right][1];
}
ll query(ll node,ll b, ll e, ll i, ll j)
{
    if (i > e || j < b)
        return 0;
    if (b >=i || e <= j)
        if(b==i) return tree[node][0];
        else return tree[node][1];

    ll Left = node * 2;
    ll Right = node * 2 + 1;
    ll mid = (b + e) / 2;
    ll p1 = query(Left, b, mid, i, j);
    ll p2 = query(Right, mid + 1, e, i, j);
    //return p1 + p2;
    if(p1==i && p2==j)
    {
        return 1;
    }
    return 0;
}




void body()
{
    string s;
    cin>>s;

    if((s[0]=='Y' || s[0]=='y')&&(s[1]=='e' || s[1]=='E')&&(s[2]=='s'||s[2]=='S'))
    {
        YES;
    }
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


