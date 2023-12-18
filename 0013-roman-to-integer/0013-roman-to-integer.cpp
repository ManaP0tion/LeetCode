class Solution {
public:
    int romanToInt(string s) {
        int ans = 0;
        enum value{ I=1, V=5, X=10, L=50, C=100, D=500, M=1000};
        for(int i = 0; i < s.length(); i++){
            switch(s[i]){
                case 'I' :
                    if(s[i+1] != s.length() && s[i+1] == 'V' || s[i+1] == 'X')
                        ans-=I;
                        
                    else
                        ans+=I;
                    break;
                    
                case 'V' :
                    ans+=V;
                    break;
                case 'X' :
                    if(s[i+1] != s.length() && s[i+1] == 'L' || s[i+1] == 'C')
                        ans-=X;
                    else
                        ans+=X;
                    break;
                case 'L' :
                    ans+=50;
                    break;
                case 'C' :
                    if(s[i+1] != s.length() && s[i+1] == 'D' || s[i+1] == 'M')
                        ans-=C;
                    else
                        ans+=C;
                    break;
                case 'D' :
                    ans+=D;
                    break;
                case 'M' :
                    ans+=M;
                    break;
            }
        }
        return ans;
    }
};