#include<bits/stdc++.h>

using namespace std;

int main() {
    int t,n,x[100000],i,j,a,b,k,c,m;
    cin>>t;
    while(t--) {
        scanf("%d",&n);
        c=0;
        scanf("%d",&m);
        int s[100000];
        for(i=0; i<m; i++) {
            scanf("%d",&x[i]);
        }
        for(i=0; i<m; i++) {
            for(j=x[i],k=1; j<=n; j=x[i]*k) {
                if(n% x[j]==0 || n% x[j]==6)
                    c+=0;
                else if(s[j]==0) {
                    s[j]++;
                    c++;
                }
                cout<<s[j]<<endl;
                k++;
            }
        }
        cout<<c<<endl;
    }
    return 0;
}
