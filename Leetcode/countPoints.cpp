class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
        vector<int>vec;
        int count=0;
        for(int i=0; i<queries.size(); i++){
            int radius=queries[i][2];
            int x=queries[i][0];
            int y=queries[i][1];
            count=0;
        for(int j=0; j<points.size(); j++){
            if( pow((points[j][0]-x), 2) + pow((points[j][1]-y), 2) <= pow(radius, 2)){
                count++;
            }
        }
            vec.push_back(count);
        }
        return vec;
    }
};
