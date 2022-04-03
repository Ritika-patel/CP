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

ll result(ll num1){
    ll sum=0;
    while(num1>0){
        sum+=num1%10;
        num1=num1/10;
    }
    return sum;
}

void solve(){
    ll n; cin>>n;

    if(n<10){
        cout<<n<<endl;
        return;
    }
    ll count=0;
    ll x=n;
    bool flag=true;
    ll num1=0, num2=0;
    int sum=0;

    while(x>0){
        x=x/10;
        count++;
    }

    if(n%10<=9) count=count-1;

    for(int i=0; i<count; i++) { 
        int tmp=9; 
        sum+=tmp;
        num1 = num1*10+tmp; 
    }
    sum+=result(n-num1);
    cout<<sum<<endl;
    //cout<<num1<<" "<<n-num1<<" "<<sum<<endl;
}  

int main(){
    SPEED;
    solve();
    return 0;
}


