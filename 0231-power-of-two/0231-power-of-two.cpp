class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n == 1) return true;
        if(n % 2 != 0 && n != 1)
            return false;
            
        vector<int> p2(32);
        p2[0] = 1;
        for(int i = 1; i<=30; i++){
            p2[i] = p2[i-1] * 2;
            if(p2[i] == n){
                return true;
            }
        }
        return false;
    }
};