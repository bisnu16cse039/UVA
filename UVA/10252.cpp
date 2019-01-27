#include<bits/stdc++.h>

using namespace std;
char s1[1001],s2[1001],s3[1001];
int main()
{
    while(gets(s1))
    {
        gets(s2);
        int k=0;
        for(int i=0; s1[i]; i++)
        {
            for(int j=0; s2[j]; j++)
            {
                if(s1[i]==s2[j]){
                    s3[k++]=s1[i];
                    s2[j]='0';
                    break;
                   // cout<<s3[k-1]<<endl;
                }

            }
        }
        s3[k]='\0';
        for(int i=0;i<k;i++){
            for(int j=0;j<k-1;j++){
                if(s3[j+1]<s3[j]){
                    char t=s3[j];
                    s3[j]=s3[j+1];
                    s3[j+1]=t;
                }
            }
        }
        for(int i=0;i<k;i++)
            cout<<s3[i];

       cout<<endl;

    }
    return 0;
}
