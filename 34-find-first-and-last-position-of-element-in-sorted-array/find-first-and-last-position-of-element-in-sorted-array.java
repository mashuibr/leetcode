class Solution {
     public int[] searchRange(int[] nums, int target) {

        int res[] = {-1,-1};
        res[0] = findFirst(nums,target);
        res[1] = findLast(nums,target);

        return res;
    }

    int findFirst(int[] nums,int target){
        int l=0,r=nums.length-1,ans=-1;

        while(l<=r){
            int mid=(l+r)/2;

            if(nums[mid]==target){
                ans=mid;
                r=mid-1;
            }
            else if(nums[mid]<target) l=mid+1;
            else r=mid-1;
        }

        return ans;
    }

    int findLast(int[] nums,int target){
        int l=0,r=nums.length-1,ans=-1;

        while(l<=r){
            int mid=(l+r)/2;

            if(nums[mid]==target){
                ans=mid;
                l=mid+1;
            }
            else if(nums[mid]<target) l=mid+1;
            else r=mid-1;
        }

        return ans;
    }
}