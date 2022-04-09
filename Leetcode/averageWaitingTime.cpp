class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        double watingTime=0;
        int n=customers.size();
        double wating=0, timearrival=0, totaltime=0, sum=0;
        
        for(int i=0; i<n; i++){
            if(i==0){
                totaltime=customers[i][0]+customers[i][1];
                timearrival=customers[i][0];
                wating=totaltime-timearrival;
                sum=wating;
            }else if(totaltime > customers[i][0]){
                totaltime+=customers[i][1];
                timearrival=customers[i][0];
                wating=totaltime-timearrival;
                sum+=wating;
            }else{
                totaltime=customers[i][0]+customers[i][1]; 
                timearrival=customers[i][0]; 
                wating=totaltime-timearrival; 
                sum+=wating;
            }
            
        }
        return (double)sum/n;
        
    }
};
