class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int> count;
        for(auto n:nums){
            count[n]++;
        }
        for(auto m:count){
            if(m.second>1){
                return true;
            }
        }
        return false;
    }
};