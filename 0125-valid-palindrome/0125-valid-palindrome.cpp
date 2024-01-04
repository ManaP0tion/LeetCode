class Solution {
public:
    bool isPalindrome(string s) {
        vector <char> s1;
        vector <char> s2;
        for(int i=0; i<s.size(); i++){
            if(isalnum(s[i])){
                s[i] = tolower(s[i]);
                s1.push_back(s[i]);
                s2.push_back(s[i]);
            }
        }
        reverse(s2.begin(), s2.end());
        return s1 == s2;
    }
};