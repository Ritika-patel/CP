class Solution {
public:
    vector<int> filterRestaurants(vector<vector<int>>& restaurants, int veganFriendly, int maxPrice, int maxDistance) {
         vector<vector<int>>arr;
         vector<int>ans;
        for(int i=0; i<restaurants.size(); i++){
            arr.push_back({restaurants[i][1], restaurants[i][0], restaurants[i][2], restaurants[i][3], restaurants[i][4]});
        }
        sort(arr.begin(), arr.end());
        
        if(veganFriendly==1){
            for(int i=0; i<arr.size(); i++){
                if(arr[i][2]==1 && arr[i][3]<=maxPrice && arr[i][4]<=maxDistance ) ans.push_back(arr[i][1]);
            }
        }else{
            for(int i=0; i<arr.size(); i++){
                if( arr[i][3]<=maxPrice && arr[i][4]<=maxDistance )ans.push_back(arr[i][1]);
            }
        }

        reverse(ans.begin(), ans.end());        
        return ans;
    }
};
