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
    int t;
    t=ini();
    while(t--){
        int x,y,r=0;
        cin>>x>>y;
        r+=sqrt(y)-sqrt(x);
        int p=log10(y)/log10(2);
        int q=log10(x)/log10(2);
        r+=p-q;
        int a=sqrt(x);
        int b=sqrt(y);
        for(int i=a;i<=b;i++){

        }
        cout<<r<<endl;
    }
    return 0;
}

