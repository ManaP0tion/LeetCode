class Solution {
public:
    int maxScore(string s) {
        int ans = -1;
        int zero = 0;
        int one = 0;
        
        for(char c : s){
            if(c == '1')
                one++;
        }

        for(int i = 0; i<s.length() -1; i++){
            if(s[i] == '0')
                zero++;
            else
                one--;
            int sum = zero + one;
            ans= max(ans, sum); 
        }
        return ans;
    }
};