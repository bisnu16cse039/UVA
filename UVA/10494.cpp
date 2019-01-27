#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long x,y,z;
    char c,s[1000000],s1[100000];

    while(scanf("%s %c %lld",s,&c,&y)==3){
            int r=0,d=0,k=0;
            for(int i=0;s[i];i++){
                r=r*10 +s[i]-'0';
                if(r>=y){
                    d=(r/y);
                    s1[k++]=d+'0';
                    r=r%y;
                    cout<<s1[k-1]<<endl;
                }
                else{
                     s1[k++]='0';
                     cout<<s1[k-1]<<endl;
                }

            }
            s1[k++]='/0';
        if(c=='/')
            puts(s1);
        else
           cout<<r<<endl;
    }
    return 0;
}
