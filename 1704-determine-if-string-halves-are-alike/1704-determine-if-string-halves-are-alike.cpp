class Solution {
public:
    bool isVowel(char c){
        if( c == 'a' || c == 'A' ||c == 'e' || c == 'E' || c == 'i' || c == 'I' || c == 'o'|| c == 'O' || c == 'U' || c =='u')
            return true;
        return false;
    }

    bool halvesAreAlike(string s) {
        int firstCount = 0, secondCount = 0;
        int midPoint = s.length() / 2;
        string s1 = s.substr(0, midPoint);
        string s2 = s.substr(midPoint);
        for(int i = 0; i<midPoint; i++){
            if(isVowel(s1[i]))
                firstCount++;
            if(isVowel(s2[i]))
                secondCount++;
        }
        if(firstCount == secondCount)
            return true;
        return false;
    }

    
};