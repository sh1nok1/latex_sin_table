#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define R cin>>
#define P cout<<
#define pd(a) printf("%.10f\n",a)
#define fillzero(a) memset(a,0,sizeof(a))
#define REP(i,m,n) for(ll i=(ll)(m);i<(ll)(n);i++)
#define rep(i,n) REP(i,0,n)
#define all(c) (c).begin(),(c).end()
#define in(a) insert(a)

void ptrig(int n){
    P n<<" & \\DegSin{"<<n<<"} & \\DegCos{"<<n<<"} & \\DegTan{"<<n<<"} \\\\"<<endl;
}

int main() {
    rep(i,6){
        ptrig(i);
    }
    REP(i,25,31){
        ptrig(i);
    }
    REP(i,355,361){
        ptrig(i);
    }
}

