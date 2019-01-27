#include<bits/stdc++.h>

using namespace std;
int prime[20000001],p,mark[20000001],n,x=1,twin[100001];
int sieve() {
    prime[p++]=2;
    int i,j,l=sqrt(20000000+1);
    for(i=3; i<=20000000; i+=2) {
        if(!mark[i]) {
            prime[p++]=i;
            if((prime[p-1]-prime[p-2])==2)
                twin[x++]=prime[p-2];
            if(i<=l) {
                for(j=i*i; j<=20000000; j+=i*2) {
                    mark[j]=1;
                }
            }
        }
    }

}
int main()
{
    int n;

    sieve();
    while(scanf("%d",&n)==1){
    int b=twin[n];
    printf("(%d, %d)\n",b,b+2);}
    return 0;
}
