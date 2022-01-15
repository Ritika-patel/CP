class Solution {
    public List<Integer> findDuplicates(int[] nums) {
        int[] arr = new int[100001];
        List<Integer>L = new ArrayList<Integer>();
        
        for(int i=0; i<nums.length; i++){
            arr[nums[i]]++;
        }
        
        for(int i=0; i<100001; i++){
            if(arr[i]==2) L.add(i);
        }
         return L;
        
    }
}
