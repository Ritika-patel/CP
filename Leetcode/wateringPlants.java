class Solution {
    public int wateringPlants(int[] plants, int capacity) {
        int sum=0;
        int n=plants.length;
        int count=0;
        
        for(int i=0; i<n; i++){
            sum=sum+plants[i];
            count++;
            
            if(sum>capacity){
                count+=i*2;
                sum=plants[i];
            }
        }
        return count;
    }
}
