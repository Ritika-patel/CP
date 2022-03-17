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



int main(){
    string text1; cin>>text1;
    string text2; cin>>text2;
    int m=text1.size(),n=text2.size();
    int memo[m+1][n+1];
 
        for(int i=0; i<m+1; i++){
            memo[i][0]=0;
        }
        
         for(int i=0; i<n+1; i++){
            memo[0][i]=0;
        }
        
        for(int i=1;i<m+1;i++){
            for(int j=1;j<n+1;j++){
                if(text1[i-1]==text2[j-1]) memo[i][j]= 1 + memo[i-1][j-1];
                else memo[i][j]=max(memo[i-1][j], memo[i][j-1]);
            }
        }
        


    int len=memo[m][n];
    int index=len-1;
    int i=m; int j=n;

    string ans="";
    for(int i=0; i<len; i++) ans+=" ";


    while(i>0 && j>0){
        if(text1[i-1]==text2[j-1]){
            ans[index]=text1[i-1];
            index--;
            i--;
            j--;
        }else if(memo[i-1][j]>memo[i][j-1]){
            i--;
        }else{
            j--;
        }
    }

    cout<<ans;
}
