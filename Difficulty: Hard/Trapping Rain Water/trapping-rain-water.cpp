class Solution {
  public:
    int maxWater(vector<int> &arr) {
        // code here
        int w=0,lm=0,rm,l,r;
        int n=arr.size();
        rm=n-1;
        l=1;
        r=rm-1;
        while(l<=r){
            if(arr[lm]>arr[rm]){
                w+= max(0, arr[rm] - arr[r]);
                if(arr[r]>arr[rm]) rm=r;
                
                r--;
            } else {

                w+= max(0,arr[lm] - arr[l]);
                if(arr[l]>arr[lm]) lm=l;
                l++;
            }
        }
        return w;
    }
};