#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,b;

    while(scanf("%d %d",&n,&b)==2){
            double k=0.0;
        for(int i=1;i<=n;i++){
            k+=log10(i)/log10(b);
        }
        int l=floor(k)+1;
        cout<<l<<endl;
    }
    return 0;
}
