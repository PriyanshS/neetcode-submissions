class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0){
            return 0;
        }
        if(nums.size()==1){
            return 1;
        }
        sort(nums.begin(),nums.end());
        vector<int> counts;
        int maxCount;
        int count=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]-nums[i-1]==1){
                count++;
            }else if(nums[i]-nums[i-1]==0){
                continue;
            }else{
                counts.push_back(count);
                count=1;
                continue;
            }
        }
        counts.push_back(count);
        sort(counts.begin(),counts.end());
        maxCount=counts[counts.size()-1];
        return maxCount;

    }
};
