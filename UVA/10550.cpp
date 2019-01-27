#include<bits/stdc++.h>

using namespace std;

#define ll             long long
#define vi             vector<int>
#define FOR(x, l, r)   for (int x = l; x <= r; ++x)
#define RFOR(x, l, r)   for (int x = l; x >= r; --x)

const int N = (int) 2e5 + 5;
const int INF = (int) 1e9 + 7;
int ini(){
    int x;
    scanf("%d",&x);
    return x;
}
long long inl(){
    long long x;
    scanf("%lld",&x);
    return x;
}

int main()
{
    int p,a,b,c;
    while(scanf("%d %d %d %d",&p,&a,&b,&c)==4){
        if(a==0 && b==0 &&c==0  && p==0)
            break;
        int res=0;
        if(a>=p)res+=3*180 + abs(a-p)*9;
        else res+=3*180+ 360-abs(p-a)*9;
        cout<<res<<endl;
        if(b>=a)res+=360-abs(b-a)*9;
        else res+=abs(a-b)*9;
        cout<<res<<endl;

        if(c>=b)res+=abs(c-b)*9;
        else res+=360-abs(c-b)*9;
        cout<<res<<endl;
    }
    return 0;
}

