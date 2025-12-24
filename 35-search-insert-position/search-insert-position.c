int searchInsert(int* nums, int numsSize, int target) {
    int i=0;
    if(nums[i]>=target){
        return i;
    }
    for(i=1; i<numsSize;i++){
        if(nums[i-1]<target && nums[i]>=target){
            return i;
        }
    }
    if(target>nums[i-1]){
        return i;
    }
    return 0;
}