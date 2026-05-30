class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int,int> table;
        for(int i=0;i<numbers.size();i++){
            int rem=target-numbers[i];
            if(table.count(rem)){
                return{table[rem],i+1};
            }
            table[numbers[i]]=i+1;
        }
        return {};
    }
};
