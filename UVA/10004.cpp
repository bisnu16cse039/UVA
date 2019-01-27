#include<bits/stdc++.h>

using namespace std;
int a[100009],mb,fi[1000],b;
vector<int>adj[100009];
int cost[205][305],v[1000];
int bicoloring(int b) {

    int m=0;
    for(int i=0; i<b; i++) {
        for(int j=adj[fi[i]][0],x=0; x<adj[fi[i]].size(); x++,j=adj[fi[i]][x]) {
            if(adj[j].size()>0) {
                for(int y=0; y<adj[j].size(); y++) {
                    if(cost[fi[i]][adj[j][y]]==5 && adj[j][y]!=fi[i]) {
                          //  cout<<fi[i]<<" "<<adj[j][y]<<endl;
                        m=1;
                        break;
                    }

                }
            }
            if(m==1)
                break;
        }
        if(m==1)
            break;
    }
    return m;
}
int main() {
    int n,m,x,y;
    while(scanf("%d",&n)==1) {
        if(n==0)
            break;
        cin>>m;
        int l,a=0;
        int ma=0,mi=300;
        for(int i=0; i<=n; i++) {
            for(int j=0; j<=n; j++) {
                cost[i][j]=0;
                cost[j][i]=0;
            }
        }
        for(int i=0; i<m; i++) {
            cin>>x>>y;
            v[a++]=x;
            v[a++]=y;

            adj[x].push_back(y);
            adj[y].push_back(x);
            cost[x][y]=5;
            cost[y][x]=5;
        }

        b=0;
        fi[b++]=v[0];
        for(int i=1; i<a; i++) {
            if(v[i+1]!=v[i]) {
                fi[b++]=v[i];
            }
        }


        //   cout<<bicoloring(0,n-1)<<endl;

        if(bicoloring(b))
            cout<<"NOT BICOLORABLE."<<endl;
        else
            cout<<"BICOLORABLE."<<endl;

    }

    return 0;
}
