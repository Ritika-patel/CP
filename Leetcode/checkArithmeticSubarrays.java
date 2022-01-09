class Solution {
    public List<Boolean> checkArithmeticSubarrays(int[] nums, int[] l, int[] r) {
        List<Boolean> list = new ArrayList<>();
        List<Integer> ans = new ArrayList<>();
        boolean A=true;
        int diff=0;

        for(int j=0; j<l.length; j++){
            for(int k=l[j]; k<=r[j]; k++){
                ans.add(nums[k]);
            }
            
            Collections.sort(ans);
            diff=ans.get(0)-ans.get(1);
             
            
            for(int i=0; i<ans.size()-1; i++){
                if(ans.get(i)-ans.get(i+1) != diff){
                    A=false;
                    break;
                }
            } 
            
            list.add(A);
            ans.clear();
            A=true;
        }

        return list;
    }
}
