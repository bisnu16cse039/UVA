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
vi adj[110],ts;
int in[110];
void top_sort(int n){
    queue<int>q;

    for(int i=1;i<=n;i++){
        if(!in[i])q.push(i);
    }
    while(!q.empty()){
        int u=q.front();

        q.pop();
        ts.push_back(u);
        for(int i=0;i<adj[u].size();i++){
            int v=adj[u][i];
            in[v]--;
            if(in[v]==0){
                q.push(v);
            }
        }

    }
}

int main() {
    int n,i,j,m;
    while(scanf("%d %d",&n,&m)==2) {
            if(n==0 && m==0)break;
        for(i=1; i<=m; i++) {
          int x,y;
          x=ini();
          y=ini();
          in[y]++;
          adj[x].push_back(y);
        }
        top_sort(n);

        for(int i=0;i<n;i++){
                cout<<ts[i];
            if(i!=n-1)cout<<" ";
        }
        cout<<endl;
       for(int j=1;j<=n;j++){
         adj[j].clear();
       }

    }
    return 0;
}

