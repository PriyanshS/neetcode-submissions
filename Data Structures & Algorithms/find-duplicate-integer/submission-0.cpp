class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int> map;
        for(const auto & n:nums){
            map[n]++;
        }
        for(const auto & m:map){
            if(m.second>1){
                return m.first;
            }
        }
        return 0;
    }
};
