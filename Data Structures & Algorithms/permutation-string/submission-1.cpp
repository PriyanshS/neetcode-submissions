class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char,int> map;
        for(const auto & c: s1){
            map[c]++;
        }
        int need=map.size();
        for(int r=0;r<s2.size();r++){
            unordered_map<char,int> map2;
            int cur=0;
            for(int j=r;j<s2.length();j++){
                char c=s2[j];
                map2[c]++;
                if(map[c]<map2[c]){
                    break;
                }
                if(map[c]==map2[c]){
                    cur++;
                }
                if(cur==need){
                    return true;
                }
            }
            
        }
        return false;
    }
};
