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
    scanf("%lld",&x);
    return x;
}
double pi=3.14159265358979;
int main() {
    int t,te=1;

    double n;
    double R,r;
    while(scanf("%lf %lf",&R,&n)==2) {
        double i=0.0,E=0.0;
        if(n==1) {
            printf("%.10f %.10f %.10f\n",R,i,E);
        } else {
            double ang=360.0/(double)n;
            ang/=2;

            double ang1=180.0-(90.0+ang);

            ang=(pi*ang)/180.0;
            ang1=(pi*ang1)/180.0;
            double r1=1.0+sin(ang);
            //  cout<<r1<<endl;
            r=(R*sin(ang))/r1;
            //  cout<<r<<endl;
            double l1=R-r;

            double l=l1*(cos(ang));
            //  cout<<l<<endl;
            double d=r*(sin(ang1));
            //  cout<<d<<endl;
            double area1=(1.0/2.0)*r*r*(ang1*2.0);
            //  cout<<area1<<endl;
            double s1=(r+r+ d*2)/2.0;
            double area2=sqrt(s1*(s1-r)*(s1-r)*(s1 - (2.0*d)));
            //cout<<area2<<endl;
            double s2=(l+l+ d*2.0)/2.0;
            //cout<<s2<<endl;
            double area3=sqrt(s2*(s2-l)*(s2-l)*(s2- (2.0*d)));
            //  cout<<area3<<endl;
            double k=(area1-area2);
            //  cout<<k<<endl;
            i=area3-k;

            // cout<<i<<endl;
            i=i*(double)n;

            double tarea=pi*R*R-(n*pi*r*r);
            E=tarea-i;
            printf("%.10f %.10f %.10f\n",r,i,E);
        }
    }
    return 0;
}


