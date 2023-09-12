/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
/*
Example 1:

Input: digits = [1,2,3]
Output: [1,2,4]
Explanation: The array represents the integer 123.
Incrementing by one gives 123 + 1 = 124.
Thus, the result should be [1,2,4].
Example 2:

Input: digits = [4,3,2,1]
Output: [4,3,2,2]
Explanation: The array represents the integer 4321.
Incrementing by one gives 4321 + 1 = 4322.
Thus, the result should be [4,3,2,2].
Example 3:

Input: digits = [9]
Output: [1,0]
Explanation: The array represents the integer 9.
Incrementing by one gives 9 + 1 = 10.
Thus, the result should be [1,0].
 
*/
int* plusOne(int* digits, int digitsSize, int* returnSize){
    int i,j;
    int size = digitsSize;
   
        for(i = digitsSize-1 ; i >= 0 ; i--){
            
                if(digits[i] < 9){
                    digits[i]++;
                    *returnSize = digitsSize;
                    return digits;
                }else{
                    digits[i] = 0;
                }
        }
        *returnSize = digitsSize + 1;
        int *NvDigits = (int*)malloc((*returnSize) * sizeof(int*)) ;
        NvDigits[0] = 1;
        for(i = 1 ; i <= (*returnSize) ; i++){
            NvDigits[i] = 0;
        }
    return NvDigits;
}
