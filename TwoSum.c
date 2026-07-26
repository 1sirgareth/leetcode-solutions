/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) 
{
    int *indices = malloc(2 * sizeof(int));
    indices[0] = 0;
    indices[1] = 1;
    for (int i = 0; i < numsSize; i++)
    {
        for (int j = i + 1; j < numsSize; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                indices[0] = i;
                indices[1] = j;
                break;
            } 
        }
    if (nums[indices[0]] + nums[indices[1]] == target)
    {
        break;
    }
    }
    *returnSize = 2;
    return indices;    
}
