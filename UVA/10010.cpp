#include<bits/stdc++.h>

using namespace std;

#define ll             long long
#define vi             vector<int>
#define FOR(x, l, r)   for (int x = l; x <= r; ++x)
#define RFOR(x, l, r)   for (int x = l; x >= r; --x)

const int N = (int) 2e5 + 5;
const int INF = (int) 1e9 + 7;
int ini() {
    int x;
    scanf("%d",&x);
    return x;
}
long long inl() {
    long long x;
    scanf("%d",&x);
    return x;
}
int main() {
    int t;
    t=ini();
    while(t--) {
        int m,n;
        char s[155];
        cin>>m>>n;
        for(int i=1; i<=m; i++) {
            cin>>s[i];
        }
        int k;
        cin>>k;
        char sr[155];
        for(int i=1; i<=k; i++) {
            cin>>sr[i];
        }
        for(int i=1; i<=k; i++) {
            bool f=false;
            int l1=strlen(sr[i]);
            for(int j=1; j<=m; j++) {
                int l2=strlen(s[j])
                for(int x=0; sr[j][x]; x++) {
                    if(s[j][x]==sr[i][0]) {
                        int z=1;
                        for(int y=x+1; sr[j][y] && s[j][y] ; y++,x++) {
                            if(sr[j][y]!=s[j][y]) {
                                break;
                            }
                            z++;
                            if(z==l1) {
                                f=true;
                                break;
                            }
                        }
                    }
                    if(f==true)
                        break;
                }
                if(f==true){
                    printf("%d ")
                }

            }
        }
    }
    return 0;
}

