#include<bits/stdc++.h>

using namespace std;
int a[10000],b[100000],c[100000];
char s[100000];
int main()
{
    int n,i,j;
    cin>>n;
    getchar();
    for( i=0;i<n;i++){
        gets(s);
        for(int j=0;s[j];j++){
            if((int)s[j]>='a' && s[j]<='z'){
                a[(int)s[j]-32]++;
            }
            else if(s[j]>='A' && s[j]<='Z')
                a[(int)s[j]]++;
        }
    }
    for( i=0,j=65;j<=90;j++){
        if(a[j]>0){
            b[i++]=a[j];
        }
    }
    sort(b,b+i);
    int l=0;
    c[l++]=b[0];
    for(int k=1;k<i;k++){
        if(b[k]==b[k-1]){
            continue;
        }
        c[l++]=b[k];
    }
    for(j=l-1;j>=0;j--){
        for(int k=65;k<=90;k++){
                if(a[k]==c[j]){
                     char ch=(char)k;
                     printf("%c %d\n",ch,c[j]);
                }

        }
    }
    return 0;
}
