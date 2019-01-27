#include<bits/stdc++.h>

using namespace std;

double pi=2*acos(0.0);
int main()
{
    int n,te=1;
    double area;
    while(scanf("%d %lf",&n,&area)==2){
        if(n<3)break;
        double triarea=(1.0/((double)n))*area;
        double angle=360.0/n;
        angle=(angle*pi)/180.0;

        double c=sqrt((2.0 * triarea)/sin(angle));
        angle/=2;
        double a=c*cos(angle);

        double area1=pi*c*c - area;
        double area2=area-pi*a*a;
     //   cout<<area1<<" "<<area2<<endl;
         printf("Case %d: %.5f %.5f\n",te,area1,area2);
         te++;
    }

    return 0;
}
