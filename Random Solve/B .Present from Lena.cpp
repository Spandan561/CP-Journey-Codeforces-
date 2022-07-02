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
#define mx 100001

#define  fastio     ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);


using namespace std;

int tree[300005];
ll a[1000010] = {0};
ll b[1000010] = {0};
ll c[1000010] = {0};

void segment_tree(int node, int l, int u)
{
    if(l==u)
    {
        tree[node] = a[l];
        return;
    }
    int left = 2*node;
    int right = 2*node +1;
    int mid = (l+u)/2;
    segment_tree(left, l, mid);
    segment_tree(right, mid+1, u);
    tree[node] = min(tree[left], tree[right]);
}

int query(int node, int l, int u, int i, int j)
{
    if(i>u || j<l)
    {
        return 0;
    }
    if(l>=i && u<=j)
    {
        return tree[node];
    }
    int left = 2*node;
    int right = 2*node + 1;
    int mid = (l+u)/2;
    int p1 = query(left, l, mid,i,j);
    int p2 = query(right, mid+1,u, i,j);

    //tree[node] = min(p1,p1);

    return p1+p2;

}

void update(int node, int l, int u, int i, int val)
{
    if(i>u || i<l)
    {
        return ;
    }
    if(l>=i && u<=i)
    {
        tree[node] = val;
        return;

    }
    int left = 2*node;
    int right = 2*node + 1;
    int mid = (l+u)/2;
    int p1 = query(left, l, mid,i,val);
    int p2 = query(right, mid+1,u, i,val);

    tree[node] = tree[left] + tree[right];

}

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
    if(p==0)
    {
        return 1;
    }
    else if(p%2==0)
    {
        ll x = (mod(b,p/2,m)%m);
        return (x*x)%m;
    }
    else if(p%2==1)
    {
        ll x = b;
        ll y = (mod(b,p-1,m)%m);
        return (x*y)%m;
    }
}


void body()
{
    ll n; cin>>n;
    ll m = 2*n +1;
    ll a[m][m] = {-1};

    for(ll i=-n;i<=n;i++)
    {
        ll x = 2 * abs(i);

        for(ll j=0;j<x;j++)
        {
            cout<<" ";
        }
        ll y = n-(x/2);
        for(ll j=0;j<y; j++)
        {
            cout<<j<<" ";
        }
        for(ll j=y;j>0;j--)
        {
            cout<<j<<" ";
        }
        cout<<0<<nl;
    }

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
    }
    */
    return 0;



}


