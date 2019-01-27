#include<bits/stdc++.h>

using namespace std;
double pi=acos(-1);
int main()
{
    double r,n;
    while(scanf("%lf %lf",&r,&n)==2){
        double angle=360/(n*2);
        angle=(angle*pi)/180;
        double res=n*r*r*sin(angle)*cos(angle);
        printf("%.3f\n",res);
    }
    return 0;
}
