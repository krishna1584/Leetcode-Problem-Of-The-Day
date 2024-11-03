class Solution {
public:
    bool rotateString(string s, string goal) {
        for(int i=0;i<s.size();i++){
            if(s==goal) return 1;
            goal=goal.back()+goal;
            goal.pop_back();
        }
        return 0;
    }
};
