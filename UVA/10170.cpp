#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long s,d;
    while(scanf("%lld %lld",&s,&d)==2){
        for(long long i=1,j=s; ;j++){

            if(d<=(i+j-1)){
                 cout<<j<<endl;
                 break;
            }
            i+=j;

        }
    }
    return 0;
}
