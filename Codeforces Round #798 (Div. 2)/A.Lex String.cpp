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

void body()
{
    ll n,m,k; cin>>n>>m>>k;

    string s1,s2; cin>>s1>>s2;

    sort(s1.begin(),s1.end()); sort(s2.begin(),s2.end());

    ll i=0,j=0;
    string c="";
    char prev='t';
    ll x=1;
    while(i<n && j<m)
    {
        if(x==k && prev=='f')
        {
            if(prev=='s')
            {
                x++;
            }
            else
            {
                x=1;
            }
            prev='s';
            c+=s2[j];
            j++;
        }
        else if(x==k && prev=='s')
        {
            if(prev=='f')
            {
                x++;
            }
            else
            {
                x=1;
            }
            prev='f';
            c+=s1[i];
            //if()
            i++;
        }

        else
        {
            if(s1[i]<s2[j])
            {
                if(prev=='f')
                {
                    x++;
                }
                else
                {
                    x=1;
                }
                prev='f';
                c+=s1[i];
                //if()
                i++;
            }
            else
            {
                if(prev=='s')
                {
                    x++;
                }
                else
                {
                    x=1;
                }
                prev='s';
                c+=s2[j];
                j++;
            }

        }
        //cout<<i<<" "<<j<<" "<<k<<nl;


    }

    cout<<c<<nl;

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

 
