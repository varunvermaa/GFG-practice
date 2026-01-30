class Solution {
    public boolean isPalindrome(int n) {
        // code here
        int t=0;
        int a = n;
        while(a>0){
            t = t*10;
            t+= a%10;
            
            a/=10;
        }
        return (t==n);
    }
}