int cutRod(vector<int> &arr, int n)
{
    vector<int>prev(n+1, 0);
    vector<int>cur(n+1, 0);
    
    int take=0, not_take=0;
    for(int i=0; i<n+1; i++){
        prev[i]=i*arr[0];
    }
    
    for(int index=1; index<n; index++){
        for(int T=0; T<n+1; T++){
          int r=index+1;
          if(r>T){
             not_take=prev[T];
             take=INT_MIN;
          }else{
             take=arr[index]+cur[T-r];
             not_take=prev[T];
          }
          cur[T]=max(take, not_take);
        }
        prev=cur;
    }
    return prev[n];
}
