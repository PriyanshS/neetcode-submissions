class Solution {
public:
    int search(vector<int>& nums, int target) {
        if(nums.size()==1){
            if(target==nums[0]){
                return 0;
            }else{
                return -1;
            }
        }
        int n=nums.size()/2;
        if(target==nums[n]){
            return n;
        }
        while(target>=nums[n]){
            if(target==nums[n]){
                return n;
            }
            if(n==nums.size()){
                return -1;
            }
            n++;   
        }
        while(target<=nums[n]){
            if(target==nums[n]){
                return n;
            }
            if(n==0){
                return -1;
            }
            n--;
        }
        return -1;
    }
};
