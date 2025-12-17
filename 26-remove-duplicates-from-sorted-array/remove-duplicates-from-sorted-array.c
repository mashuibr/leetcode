int removeDuplicates(int* nums, int numsSize) {
    int top=0;
    int len=0;
    if(numsSize==0){
        return 0;
    }
    len++;
    for(int i=1 ; i<numsSize ; i++){
        if(nums[top]==nums[i]){
            continue;
        }
        else{
            nums[++top]=nums[i];
            
            len++;
        }
    }
    return len;
}