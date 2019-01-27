#include<bits/stdc++.h>

using namespace std;
vector<int>adj[10009];
int vis[1000],k;
int coloured[300];

int bfs(int s,int n) {
    queue<int>q;
    for(int i=0; i<n; i++) {
        vis[i]=0;
        coloured[i]=0;
    }
    q.push(s);
    vis[s]=1;
    coloured[s]=1;
    k=0;
    while(!q.empty()) {
        int u=q.front();

        q.pop();

        for(int i=0; i<adj[u].size(); i++) {

            if(!vis[adj[u][i]]) {
                int v=adj[u][i];
                vis[v]=1;
                q.push(v);
                if(!coloured[v]){
                    if(coloured[u]==1)
                        coloured[v]=2;
                    else
                        coloured[v]=1;
                }
            }
            if(coloured[adj[u][i]]==coloured[u] && (coloured[adj[u][i]]!=0) && coloured[u]!=0) {
                k=1;
                break;
            }


        }
    }
    return k;
}
int main() {
    int n,m,x,y;
    while(scanf("%d",&n)==1) {
        if(n==0)
            break;
        cin>>m;
        int s;

        for(int i=0; i<m; i++) {
            cin>>x>>y;
            if(i==0)
                s=x;
            adj[x].push_back(y);
            adj[y].push_back(x);

        }

        //   cout<<bicoloring(0,n-1)<<endl;

        if(bfs(s,n))
            cout<<"NOT BICOLORABLE."<<endl;
        else
            cout<<"BICOLORABLE."<<endl;
        for(int i=0;i<=n;i++){
            adj[i].clear();
            vis[i]=0;
            coloured[i]=0;
        }

    }

    return 0;
}

