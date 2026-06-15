class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int>maxArray;
        for(int i=0;i<(nums.size()-k)+1;i++){
            int max=nums[i];
            int l=i;

            while(l!=(i+k)){
                if(nums[l]>max){
                    max=nums[l];
                }
                l++;
            }
            maxArray.push_back(max);
        }
        return maxArray;
    }
};
