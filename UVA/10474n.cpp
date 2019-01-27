
#include<bits/stdc++.h>

using namespace std;
/**
********************************************************************
******************* Author:Bisnu sarkar ****************************
********************************************************************
**/
#define ll             long long
#define vi             vector<int>
#define pb             push_back
#define mp             make_pair
#define pii            pair<int,int>
#define vit            vector<int> :: iterator
#define sit            set<int> :: iterator
#define vrit           vector<int> :: reverse iterator


const int N = (int) 2e5 + 5;
const int INF = (int) 1e9 + 7;

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
int a[100009];

int main() {
    int n,q,j=1;
    while(scanf("%d %d",&n,&q)==2) {
        if(n==0 && q==0)break;
        vector<int>v;
        for(int i=0;i<10009;i++)a[i]=-1;
        for(int i=1; i<=n; i++) {
            int l=ini();
            v.push_back(l);
        }
        sort(v.begin(),v.end());
        for(int i=n-1;i>=0;i--){
            a[v[i]]=i;
        }
        printf("CASE# %d:\n",j++);
        while(q--) {
            int x;
            x=ini();

            printf("%d ",x);
            if(a[x]!=-1) {

                printf("found at %d\n",a[x]+1);
            } else {
                printf("not found\n");
            }

        }
    }

    return 0;
}


