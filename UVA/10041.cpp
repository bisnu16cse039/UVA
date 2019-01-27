#include<bits/stdc++.h>

using namespace std;
int main()

{
    int t,a[100009];
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        int d=0;

        int mn=INT_MAX;
        for(int i=0; i<n; i++)
        {
            d=0;
            for(int j=0; j<n; j++)
            {
                if(i==j)
                    continue;
                d+=abs(a[i]-a[j]);
            }
            mn=min(d,mn);
        }

        cout<<mn<<endl;
    }
    return 0;
}
