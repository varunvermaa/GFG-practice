class Solution {
    // Function to calculate factorial of a number.
    int factorial(int n) {
        // code here
        if(n==0) return 0;
        int ans = 1;
        while(n>0){
            ans*=n;
            n--;
        }
        return ans;
    }
}
