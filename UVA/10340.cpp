#include<bits/stdc++.h>

using namespace std;

int main()
{
    char s[100009],t[100009];
    while(scanf("%s %s",&s,&t)==2){
    int k=0;
    int l=strlen(s);
    for(int i=0,j=0;t[j];j++){
        if(s[i]==t[j])
            i++;
        if(i>=l){
            k=1;
            break;
        }
    }
    if(k==1)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
    }
    return 0;
}
