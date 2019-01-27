#include<bits/stdc++.h>

using namespace std;

int par[509];
int findroot(int u) {
    if(par[u]==u)
        return u;
    else
        return par[u]=findroot(par[u]);
}
void merge_set(int u,int v) {
    u=findroot(u);
    v=findroot(v);

    if(u!=v)
        par[u]=v;
}

int main() {
    int n,m;
    scanf("%d %d",&n,&m);
    string s;
    cin>>s;
    int k1=s[0];
    int k2=s[1];
    int k3=s[2];
    for(int i=0; i<=500; i++) {
        par[i]=i;
    }
    bool f=true;
    int res=-1;
    set<int>s;
    for(int i=1; i<=m; i++) {
        string p;
        cin>>p;
        int p1=p[0];
        int p2=p[1];
        s.insert(p1);
        s.insert(p2);
        merge_set(p1,p2);
        // cout<<findroot(k1)<<" "<<findroot(k2)<<" "<<findroot(k3)<<endl;
        if(findroot(k1)==findroot(k2) and findroot(k2)==findroot(k3) and res==-1) {
            res=i;
            f=false;
        }
    }
    if(f) {
        printf("THIS BRAIN NEVER WAKES UP\n");
    } else {
        printf("WAKE UP IN, %d, YEARS\n",res);
    }

    return 0;
}
