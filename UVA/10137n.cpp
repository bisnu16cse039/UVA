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
       // cout<<avg<<endl;
        double pos=0.0,neg=0.0;
       // cout<<avg<<endl;
        for(int i=0;i<n;i++){
               // cout<<a[i]-avg<<endl;

                if(a[i]>avg)
                      pos+=a[i]-avg;
                else{
                    neg+=avg-a[i];
                }
        }
        neg=abs(neg);
        cout<<pos<<" "<<neg<<endl;
        if(n==1){
            printf("$%0.00\n");
        }
        else{
           //  res/=100;
           if(pos>neg){
            printf("$%.2f\n",pos);
           }
           else{
            printf("$%.2f\n",neg);
           }

        }

    }
    return 0;
}

