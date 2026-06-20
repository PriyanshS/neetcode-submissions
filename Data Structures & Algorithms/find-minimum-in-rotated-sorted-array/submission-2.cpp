class Solution {
public:
    int findMin(vector<int> &nums) {
        int l=0;
        int r=nums.size()-1;
        while(l<r){
            if(nums[l+1]<nums[l]){
                return nums[l+1];
            }
            l++;
        }
        return nums[0];
    }
};
