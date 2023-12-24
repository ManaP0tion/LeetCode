class Solution {
public:
    int minOperations(string s) {
        int case1 = 0;      // case : start with 0
        int case2 = 0;      // case : start with 1
        
        for(int i = 0; i<s.length(); i++){
            
            if(i%2 == 0){
                if(s[i] != '0') case1++;
                if(s[i] != '1') case2++;    
            }

            else{
                if(s[i] != '1') case1++;
                if(s[i] != '0') case2++;
            }            
        }
        return min(case1, case2);
    }
};