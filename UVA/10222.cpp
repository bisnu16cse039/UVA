#include<bits/stdc++.h>

using namespace std;
char s[10000],fs[100000];
int main()
{
    gets(s);
    for(int i=0;s[i];i++){
        if(s[i]=='e' || s[i]=='E')
            fs[i]='q';
        else if(s[i]=='r' || s[i]=='R')
            fs[i]='w';
        else if(s[i]=='t' || s[i]=='T')
            fs[i]='e';
        else if(s[i]=='y' || s[i]=='Y')
            fs[i]='r';
        else if(s[i]=='u' || s[i]=='U')
            fs[i]='t';
        else if(s[i]=='i' || s[i]=='I')
            fs[i]='y';
        else if(s[i]=='o' || s[i]=='O')
            fs[i]='u';
        else if(s[i]=='p' || s[i]=='P')
            fs[i]='i';
        else if(s[i]=='[' || s[i]=='{')
            fs[i]='o';
        else if(s[i]==']' || s[i]=='}')
            fs[i]='p';
        else if(s[i]=='\\' || s[i]=='|')
            fs[i]='[';
        else if(s[i]=='d' || s[i]=='D')
            fs[i]='a';
        else if(s[i]=='f' || s[i]=='F')
            fs[i]='s';
        else if(s[i]=='g' || s[i]=='G')
            fs[i]='d';
        else if(s[i]=='h' || s[i]=='H')
            fs[i]='f';
        else if(s[i]=='j' || s[i]=='J')
            fs[i]='g';
        else if(s[i]=='k' || s[i]=='K')
            fs[i]='h';
        else if(s[i]=='l' || s[i]=='L')
            fs[i]='j';
        else if(s[i]==';' || s[i]==':')
            fs[i]='k';
        else if(s[i]==39 || s[i]=='"')
            fs[i]='l';
        else if(s[i]=='c' || s[i]=='C')
            fs[i]='z';
        else if(s[i]=='v' || s[i]=='V')
            fs[i]='x';
        else if(s[i]=='b' || s[i]=='B')
            fs[i]='c';
        else if(s[i]=='n' || s[i]=='N')
            fs[i]='v';
        else if(s[i]=='m' || s[i]=='M')
            fs[i]='b';
        else if(s[i]==',' || s[i]=='<')
            fs[i]='n';
        else if(s[i]=='>' || s[i]=='.')
            fs[i]='m';
        else if(s[i]=='/' || s[i]=='?')
            fs[i]=',';
        else
            fs[i]=s[i];
    }
    puts(fs);
    return 0;
}
