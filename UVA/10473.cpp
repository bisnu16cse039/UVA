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
        string s2;
        if(s[0]=='-' && s[1]=='1')
            break;
        int l=s.size();
        int res=0;
        if(l>1) {
            if(s[1]=='x') {
                for(int i=l-1,j=1; i>1; i--,j*=16) {
                    if(s[i]=='A')
                        s[i]='10';
                    else if(s[i]=='B')
                        s[i]='11';
                    else if(s[i]=='C')
                        s[i]='12';
                    else if(s[i]=='D')
                        s[i]='13';
                    else if(s[i]=='E')
                        s[i]='14';
                    else if(s[i]=='F')
                        s[i]='15';

                    res+=(s[i]-'0')*j;
                }
                cout<<res<<endl;
            } else {
                int n=0,j=0;
                for(int i=0; s[i]; i++) {
                    n=n*10 + (s[i]-'0');
                    if(n>=16) {
                        int r=n/16;
                        n=n%16;

                        if(r>9) {
                            if(r==10)
                                s2[j++]='A';
                            else if(r==11)
                                s2[j++]='B';
                            else if(r==12)
                                s2[j++]='C';
                            else if(r==13)
                                s2[j++]='D';
                            else if(r==14)
                                s2[j++]='E';
                            else if(r==15)
                                s2[j++]='F';
                            else {
                              s2[j++]=(char)r;
                        }
                        }
                    }
                }
                if(n!=0) {
                    if(n==0)
                        s2[j++]='A';
                    else if(n==11)
                        s2[j++]='B';
                    else if(n==12)
                        s2[j++]='C';
                    else if(n==13)
                        s2[j++]='D';
                    else if(n==14)
                        s2[j++]='E';
                    else if(n==15)
                        s2[j++]='F';
                   else {
                     s2[j++]=(char)(n+48);
                }
                }
                 cout<<"0x";
            for(int i=0;i<j;i++)
                     cout<<s2[i];
            cout<<endl;
            }
        } else {
            int n=0,j=0;
            for(int i=0; s[i]; i++) {
                n=n*10+ (s[i]-'0');
                if(n>=16) {
                    int r=n/16;
                    n=n%16;

                    if(r>9) {
                        if(r==10)
                            s2[j++]='A';
                        else if(r==11)
                            s2[j++]='B';
                        else if(r==12)
                            s2[j++]='C';
                        else if(r==13)
                            s2[j++]='D';
                        else if(r==14)
                            s2[j++]='E';
                        else if(r==15)
                            s2[j++]='F';
                    } else {
                        s2[j++]=(char)r;
                    }
                }
            }

            if(n!=0) {
                if(n==10)
                    s2[j++]='A';
                else if(n==11)
                    s2[j++]='B';
                else if(n==12)
                    s2[j++]='C';
                else if(n==13)
                    s2[j++]='D';
                else if(n==14)
                    s2[j++]='E';
                else if(n==15)
                    s2[j++]='F';
                else {
                    s2[j++]=(char)n+48;
                }
            }
             cout<<"0x";
            for(int i=0;i<j;i++)
                     cout<<s2[i];
            cout<<endl;
        }
    }
    return 0;
}

