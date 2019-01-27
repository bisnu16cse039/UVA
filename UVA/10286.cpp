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
double pi=acos(-1);
int main()
{
    double x;

    while(scanf("%lf",&x)==1){
        double ang1=108,ang2=63;
        ang1=(ang1*pi)/180.0;
        ang2=(ang2*pi)/180.0;
        double a=(sin(ang1))/sin(ang2);
        double res=a*x;
        printf("%.10f\n",res);
    }
    return 0;
}

