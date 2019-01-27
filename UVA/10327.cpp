#include<bits/stdc++.h>

using namespace std;
int main()
{
    int n,i,j,c,a[10000];
    while(scanf("%d",&n)==1){
        for(i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
        c=0;
        for(i=0;i<n-1;i++){
            if(a[i]>a[i+1]){
                swap(a[i],a[i+1]);
                //cout<<a[i]<<" "<<a[i+1]<<endl;
                c++;
                i=-1;
            }

        }
        printf("Minimum exchange operations : %d\n",c);
    }
    return 0;
}
