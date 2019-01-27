#include<bits/stdc++.h>

using namespace std;
int ini() {
    int x;
    scanf("%d",&x);
    return x;
}
int dp[10009][10009];
int price[1009],weight[1009];
int cap,n;
int fun(int i,int w,int n,int cap) {
    if(n+1==0)return 0;

    if(dp[i][w]!=-1)return dp[i][w];

    int profit1=0,profit2=0;
    if(w-weight[i]>0) {
        profit1=price[i]+fun(i+1,w+weight[i],n,cap);
    }
    profit2=fun(i+1,w,n,cap);
    dp[i][w]=max(profit1,profit2);
//   cout<<dp[i][w]<<endl;
    return dp[i][w];
}
long long res[35];
int main() {
    int t;
    t=ini();
    while(t--) {
            int ma=0;
        n=ini();
        for(int i=1; i<=n; i++) {
            price[i]=ini();
            weight[i]=ini();
            ma+=weight[i];
        }
        int group;
        group=ini();



        for(int j=1;j<=min(30,ma);j++){
            memset(dp,-1,sizeof(dp));
            res[j]=(long long)fun(1,0,n,j);

        }
        long long r=0;
        while(group--) {

            int x;
            x=ini();
            r+=res[x];

        }
        printf("%lld\n",r);

    }
    return 0;
}
