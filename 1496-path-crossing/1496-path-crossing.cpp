class Solution {
public:
    bool isPathCrossing(string path) {
        set<pair<int,int>> visit;
        pair<int, int> coordinate = {0, 0};
        visit.insert(coordinate);
        for(auto p : path){
            if(p == 'N')    coordinate.second++;
            else if(p == 'S')   coordinate.second--;
            else if(p == 'W')   coordinate.first--;
            else if(p == 'E')   coordinate.first++;
            
            if(visit.count(coordinate))     return true;
            visit.insert(coordinate);
        }
        return false;
    }
};