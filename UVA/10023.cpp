#include<bits.stdc++.h>

using namespace std;
int main()
{
    char s[100000];
    int t,a,r;
    cin>>t;
    while(t--){
        cin>>s;
        int l=strlen(s);
        if(l%2){
            a=sqrt(s[0]-'0');
            r=s[0]-'0' -a*a
            l=1;
        }
        else
        {
            int a=sqrt((s[0]-'0' *10)+s[1]-'0');
            r=((s[0]-'0' *10)+s[1]-'0')-a*a;
            l=2;
        }
        int d=a,re=a;
        for(int i=l;s[i];i++){
                n=r*10
            while(d<n){

            }
        }
    }
    return 0;
}
