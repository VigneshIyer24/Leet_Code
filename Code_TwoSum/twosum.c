
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
   int res=malloc(sizeof(int)*2);
    
    for(int i=0; i<numsSize; i++) {
     for(int j=0; j<i; j++) {
            if(nums[j])+nums[i]==target) {
                    res[0]=j;
                    res[1]=i; 
                    return res;
            }
        }
    }
                
    return -1;
}

