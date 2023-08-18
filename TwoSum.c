/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    int i , j ;
    for(i=0;i<numsSize;i++){
        for(j=i+1;j<numsSize;j++){
            if(nums[j] == target - nums[i]){
                int *result = (int*)malloc(2*sizeof(int));
                result[0] = i ;
                result[1] = j ;
                *returnSize = 2;
                return result;
            }
        }

    }
    return *returnSize = 0;
    return NULL;
}
