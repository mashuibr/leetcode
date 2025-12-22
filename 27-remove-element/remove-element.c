void swap(int* a,int* b){
    *b+=*a;
    *a=*b-*a;
    *b-=*a;
}
int removeElement(int* nums, int numsSize, int val) {
    int start=0;
    int end=numsSize-1;
    while(start<=end){
        if(nums[start]==val){
            swap(&nums[start],&nums[end]);
            end--;
            numsSize--;
        }
        else start++;
    }
    return numsSize;
}