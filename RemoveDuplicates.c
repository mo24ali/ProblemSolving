int removeDuplicates(int* nums, int numsSize) {
    if (numsSize <= 1) {
        return numsSize; 
    }

    int newSize = 1;

    for (int i = 1; i < numsSize; i++) {
        int isDuplicate = 0; 
        for (int j = 0; j < newSize; j++) {
            if (nums[i] == nums[j]) {
                isDuplicate = 1;
                break; 
            }
        }

        if (!isDuplicate) {
            nums[newSize] = nums[i]; 
            newSize++; 
        }
    }

    return newSize; 
}
