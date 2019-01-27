#include<bits/stdc++.h>

using namespace std;
/**
********************************************************************
******************* Author:Bisnu sarkar ****************************
********************************************************************
**/

#define ull            unsigned long long
#define ll             long long
#define vi             vector<int>
#define pb             push_back
#define mp             make_pair
#define pii            pair<int,int>
#define vit            vector<int> :: iterator
#define sit            set<int> :: iterator
#define vrit           vector<int> :: reverse iterator
#define ff             first
#define ss             second



int dx[8]= {1,0,-1,0,-1,-1,1,1};
int dy[8]= {0,1,0,-1,-1,1,-1,1};
int ini() {
    int x;
    scanf("%d",&x);
    return x;
}
long long inl() {
    long long x;
    scanf("%lld",&x);
    return x;
}

const int N = (int) 2e5 + 5;
const int inf = (int) 1e9 + 7;
const double pi=2* acos(0.0);
int a[N];

int main() {

    int n,i,j,te=0;
    while(scanf("%d",&n)==1) {
        if(n==0)break;

        for(i=1; i<=n; i++) {
            a[i]=ini();
        }
        vector<int>v;

        for(i=1; i<=n; i++) {
            for(j=1; j<=n; j++) {
                if(i==j)
                    continue;
                 //   cout<<a[i]+a[j]<<endl;
                v.push_back(a[i]+a[j]);
            }
        }
        sort(v.begin(),v.end());
        int m;
        m=ini();
        printf("Case %d:\n",++te);
        for(int i=1; i<=m; i++) {
                int res;
            int x=ini();
            vit it;
            it=upper_bound(v.begin(),v.end(),x);

            if(it==v.begin()){
                res=abs(*it);
            }
            else if(it==v.end()){
                    it--;
                res=abs(*it);
            }
            else{
                  int k1=*it;
                it--;
                int k2=*it;

                if(abs(k1-x)<abs(k2-x)){
                    res=k1;
                }
                else{
                    res=k2;
                }
            }
            printf("Closest sum to %d is %d.\n",x,res);

        }
    }


    return 0;
}

