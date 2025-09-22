class Solution {
  public:
    bool areRotations(string &s1, string &s2) {
        // code here
        if(s1.length() != s2.length()) return false;
        string t=s1+s1;
        return t.find(s2) != string::npos;
        // int a = s1.length();
        // int j=0;
        // for(int i=0; i<2*a; i++){
        //     if(s1[i]==s2[j]){
        //         while(s1[i]==s2[j]){
        //             i++;j++;
        //         if (j==a/2) return true;
        //         }
        //     }else j=0;
            
        // }
        // return false;
    }
};