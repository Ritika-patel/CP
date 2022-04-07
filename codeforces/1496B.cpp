#include <bits/stdc++.h>
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define REP(i,n) for (int i = 0; i < n; i++)
#define fr(i, a, b) for (int i = a; i < b; i++)
#define mod 1000000007
#define pb push_back
#include <string>
#define ff first
#define ss second
#define ii pair<int,int>
typedef long long ll;
#define vi vector<int>
#define vii vector<ii>
#define vvi vector<vi>
#define INF 1000000000
#define endl '\n'
using namespace std;

void solve(){
    ll n; cin>>n; 
    ll k; cin>>k;
    vector<ll>vec;
    ll mex=-1;
    map<ll, ll>mpp;


    for(ll i=0; i<n; i++){
        ll temp; cin>>temp;
        vec.push_back(temp);
        mpp[temp]++;
    }

    sort(vec.begin(), vec.end());
    ll temp=0;
    ll max=vec[n-1];
    for(ll i=0; i<n; i++){
        if(vec[i]==temp){
            temp++;
        }else{
            mex=temp;
            break;
        }
    }

    if(mex==-1){
        mex=vec.size();
    }

    ll num=ceil(double(max+mex)/2.0);
    if(k==0){
        cout<<mpp.size()<<endl;
        return;
    }
    if(num > max){
        cout<<mpp.size()+k<<endl;
    }else{
        mpp[num]++;
        cout<<mpp.size()<<endl;
    }

}


int main(){
    ll t; cin>>t;
    while(t--){
        solve();
    }
}

