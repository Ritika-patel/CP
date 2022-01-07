#include <bits/stdc++.h>
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define REP(i,n) for (int i = 0; i < n; i++)
#define fr(i, a, b) for (ll i = a; i < b; i++)
#define mod 1000000007
#define pb push_back
#define ff first
#define ss second
#define ii pair<int,int>
typedef long long ll;
#define vi vector<ll>
#define vii vector<ii>
#define vvi vector<vi>
#define INF 1000000000
#define endl '\n'
using namespace std;

void solve() {
    ll w, h; cin>>w>>h; 
    ll miniH1=INT_MAX;
    ll maxiH1=0;
    ll miniH2=INT_MAX;
    ll maxiH2=0;
    ll miniH3=INT_MAX;
    ll maxiH3=0;
    ll miniH4=INT_MAX;
    ll maxiH4=0;

    ll k1; cin>>k1;
    while(k1>0){
        ll temp; cin>>temp;
         miniH1=min(miniH1, temp);
         maxiH1=max(maxiH1, temp);
         k1--;
    }

    ll k2; cin>>k2;
    while(k2>0){
        ll temp; cin>>temp;
         miniH2=min(miniH2, temp);
         maxiH2=max(maxiH2, temp);
         k2--;
    }

    ll k3; cin>>k3;
    while(k3>0){
        ll temp; cin>>temp;
         miniH3=min(miniH3, temp);
         maxiH3=max(maxiH3, temp);
         k3--;
    }

    ll k4; cin>>k4;
    while(k4>0){
        ll temp; cin>>temp;
         miniH4=min(miniH4, temp);
         maxiH4=max(maxiH4, temp);
         k4--;
    }

    //horizontal
    ll widthH1=abs(maxiH1-miniH1);
    ll widthH2=abs(maxiH2-miniH2);
    ll base1=max(widthH1, widthH2);

    ll area1=(base1*h);

    //vertical

    ll widthW1=abs(maxiH3-miniH3);
    ll widthW2=abs(maxiH4-miniH4);
    ll base2=max(widthW1, widthW2);

    ll area2=(base2*w);

    cout<<max(area1, area2)<<endl;
}

int main() {
    int t; cin>>t;
    while(t--){
        solve();
    }
}

