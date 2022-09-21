
#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=1e6+2, MOD = 1e9+7;

int totient[N];

signed main()
{
    int t; cin>>t;
    while(t--)
    {
        int p; cin>>p;
        int ret=p;
        for(int i=2;i*i<=p;i++)
        {
            if(p%i==0)
            {
                while(p%i==0)
                {
                    p/=i;
                }
                ret-=ret/i;
            }
            cout<<ret<<endl;
        }
        if(p>1)
        {
            ret-=ret/p;
        }
        cout<<ret<<endl;
    }


    return 0;

}
