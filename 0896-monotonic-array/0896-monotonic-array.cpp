class Solution {
public:
    bool isMonotonic(vector<int>& num) {
        int state = -1;     // 0이면 오름차순, 1이면 내림차순이라고 생각함, -1로 초기화 했음
        if(num[0] < num[1])
            state = 0;
        else if(num[0] > num[1])
            state = 1;
        for(int i = 1; i<num.size() - 1; i++){
            if(state == 0 && num[i] > num[i+1])
                return false;
            else if(state == 1 && num[i] < num[i+1])
                return false;
        }
        return true;
    }
};