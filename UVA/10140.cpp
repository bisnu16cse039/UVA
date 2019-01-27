#include<bits/stdc++.h>

using namespace std;
#define ll long long

ll bigmod(ll x, ll y, ll p) {
    int res = 1;      // Initialize result
    x = x % p;  // Update x if it is more than or
    // equal to p
    while (y > 0) {
        // If y is odd, multiply x with result
        if (y & 1)
            res = (res*x) % p;

        // y must be even now
        y = y>>1; // y = y/2
        x = (x*x) % p;
    }
    return res;
}
bool millertest(ll n,ll d) {
    ll a=2+rand() % (n-4);
    ll x=bigmod(a,d,n);
    if(x==1 || x==n-1)
        return true;

    while(d!=n-1) {
        x=(x*x)%n;
        d*=2;

        if(x==1)
            return false;

        if(x==n-1)
            return true;
    }
    return false;
}
bool isprime(ll n) {
    if(n==1 || n==4)
        return false;
    if(n==2 || n==3)
        return true;

    ll d=n-1;

    while(d%2==0) {
        d/=2;
    }

    for(int i=0; i<4; i++) {
        if(!millertest(n,d))
            return false;
    }
    return true;
}


int main() {
    ll l,u;
    while(scanf("%lld %lld",&l,&u)==2) {
        ll p1=0;
        bool f=false;
        ll min_dis=INT_MAX, max_dis=0;
        ll r1,r2,r3,r4;
        for(ll i=l; i<=u; i++) {
            if(isprime(i)) {
                if(p1==0) {
                    p1=i;
                } else {
                    f=true;
                    ll d=i-p1;

                    if(d<min_dis){
                        min_dis=d;
                        r1=p1, r2=i;
                    }
                    if(d>max_dis){
                        max_dis=d;
                        r3=p1, r4=i;
                    }
                     p1=i;
                }
            }
        }
        if(f){
            printf("%lld,%lld are closest, %lld,%lld are most distant.\n",r1,r2,r3,r4);
        }
        else{
            printf("There are no adjacent primes.\n");
        }
    }
    return 0;
}
