class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l=0;
        int r=nums.size()-1;
        while(l<r){
            int mid=(l+r)/2;
            if(nums[mid]>nums[r]){
                l=mid+1;
            }else{
                r=mid;
            }
        }
        int pivot=l;
        int end=nums.size()-1;
        int start=0;
        if(target>=nums[l]&&target<=nums[end]){
            while(l<=end){
                int mid=(l+end)/2;
                if(nums[mid]==target){
                    return mid;
                }else if(nums[mid]<target){
                    l=mid+1;
                }else{
                    end=mid-1;
                }
            }
        }else{
            while(start<=l){
                int mid=(start+l)/2;
                if(nums[mid]==target){
                    return mid;
                }
                else if(nums[mid]<target){
                    start=mid+1;
                }else{
                    l=mid-1;
                }
            }
        }
        return -1;
        }
    };
