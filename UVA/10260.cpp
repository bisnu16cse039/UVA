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
    string s;
    while(cin>>s) {
        for(int i=0; s[i]; i++) {

            if((s[i]=='B' || s[i]=='F' || s[i]=='P' || s[i]=='V') && (s[i-1]!='B' && s[i-1]!='F' && s[i-1]!='P' && s[i-1]!='V'))
                cout<<"1";
            else if(s[i]=='C' || s[i]=='G' ||s[i]=='J' ||s[i]=='K' ||s[i]=='Q'  ||s[i]=='S' ||s[i]=='X'  ||s[i]=='Z'){
                 if(s[i-1]!='C' && s[i-1]!='G' && s[i-1]!='J' &&s[i-1]!='K' &&s[i-1]!='Q' &&s[i-1]!='S' &&s[i-1]!='X'  &&s[i-1]!='Z')
                        cout<<"2";
                    }

            else if((s[i]=='D' || s[i]=='T')&& (s[i-1]!='D' && s[i-1]!='T'))
                cout<<"3";
            else if(s[i]=='L' && s[i-1]!='L')
                cout<<"4";
            else if((s[i]=='M' ||s[i]=='N' )&& (s[i-1]!='M' &&s[i-1]!='N'))
                cout<<"5";
            else if(s[i]=='R' && s[i-1]!='R')
                cout<<"6";

        }
        cout<<endl;
    }
    return 0;
}

