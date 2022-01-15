class Solution {
    public String truncateSentence(String s, int k) {
        String p="";
        int count=0;
        int n=s.length();
        
        int i=0;
        while(count<k && i<n){
            if(s.charAt(i)==' ' || i==n-1) count++;
            p+=s.charAt(i);
            i++;
        }

        if(i!=n) p = p.substring(0, p.length()-1);        
        return p;
    }
}
