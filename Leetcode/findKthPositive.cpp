//brute-force
class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int n=arr.size();
        map<int, int>mpp;
        int count=0;
        int num=0;
        
        for(int i=0; i<n; i++){
            mpp[arr[i]]++;
        }
        
        for(int i=1; i<=n+k; i++){
            if(mpp.find(i)==mpp.end()){
                num=i;
                count++;
            }
            if(count==k){
                return num;
            }
        }
        return num;
    }
};
