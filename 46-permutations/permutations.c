/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
 void swp(int*a,int*b){
    int t=*a;*a=*b;*b=t;
}

void bt(int*a,int n,int s,int**r,int*rs){
    if(s==n){
        r[*rs]=malloc(n*sizeof(int));
        for(int i=0;i<n;i++)r[*rs][i]=a[i];
        (*rs)++;
        return;
    }
    for(int i=s;i<n;i++){
        swp(&a[s],&a[i]);
        bt(a,n,s+1,r,rs);
        swp(&a[s],&a[i]);
    }
}

int** permute(int* nums, int numsSize, int* returnSize, int** returnColumnSizes) {
    int tot=1;
    for(int i=2;i<=numsSize;i++)tot*=i;
    int**r=malloc(tot*sizeof(int*));
    *returnColumnSizes=malloc(tot*sizeof(int));
    for(int i=0;i<tot;i++)(*returnColumnSizes)[i]=numsSize;
    *returnSize=0;
    bt(nums,numsSize,0,r,returnSize);
    return r;

}