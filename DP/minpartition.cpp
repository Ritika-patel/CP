bool ispelindrome(string str, int i, int j){
    while(i<j){
        if(str[i]!=str[j]){
            return false;
        }else{
            i++;
            j--;
        }
    }
    return true;
}

int fun(string str, int i, int j){
    if(i>=j) return 0;
    if(ispelindrome(str, i, j)) return 0;
    int mini=INT_MAX;
    int temp=0;
    for(int k=i; k<=j-1; k++){
        temp=fun(str, i, k)+fun(str, k+1, j)+1;
        mini=min(mini, temp);
    }
    return mini;
}

void solve(){
    string str; cin>>str;
    cout<<fun(str, 0, str.size()-1);
}

int main(){
    solve();
}

//MEMOIZATION
#include <bits/stdc++.h>
#include <iostream>
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define REP(i,n) for (int i = 0; i < n; i++)
#define fr(i, a, b) for (ll i = a; i < b; i++)
#define mod 1000000007
#define pb push_back
#include <string>
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

bool ispelindrome(string str, int i, int j){
    while(i<j){
        if(str[i]!=str[j]){
            return false;
        }else{
            i++;
            j--;
        }
    }
    return true;
}

int fun(string str, int i, int j, vector<vector<int>>&dp){
    if(i>=j) return 0;
    if(ispelindrome(str, i, j)) return 0;
    if(dp[i][j]!=-1) return dp[i][j];

    int mini=INT_MAX;
    int temp=0;
    for(int k=i; k<=j-1; k++){
        temp=fun(str, i, k, dp)+fun(str, k+1, j, dp)+1;
        mini=min(mini, temp);
    }
    return dp[i][j]=mini;
}

void solve(){
    string str; cin>>str;
    int n=str.size();
    vector<vector<int>>dp(n, vector<int>(n, -1));
    cout<<fun(str, 0, str.size()-1, dp);
}

int main(){
    solve();
}
