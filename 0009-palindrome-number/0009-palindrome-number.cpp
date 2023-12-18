class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
            return false;
        else{
            string temp = to_string(x);
            string rev = "";
            for(int i = temp.length()-1; i>=0; i-- )
                rev += temp[i];
            if(rev == temp)
               return true;
        }
        return false;
    }
};