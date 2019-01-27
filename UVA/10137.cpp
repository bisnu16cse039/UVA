#include<bits/stdc++.h>

using namespace std;
double a[100009];
int main()
{
    int n;
    while(scanf("%d",&n)==1){
            if(n==0)
            break;
          double s=0;
        for(int i=0;i<n;i++){
            scanf("%lf",&a[i]);
            s+=a[i];
        }
        double avg=s/(double)n;
        int k=avg*1000;
        cout<<k<<endl;
        int l=k%10;
        if(l>=5){
            k/=10;
            k+=1;
        }
        else
            k/=10;
        avg=(double)k/100;

        double r=0;
        for(int i=0;i<n;i++){
            if(a[i]>avg){
                r+=a[i]-avg;
            }
        }
        printf("$%.2f\n",r);
    }
    return 0;
}
