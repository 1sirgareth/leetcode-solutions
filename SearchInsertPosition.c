int searchInsert(int* nums, int numsSize, int target) 
{
    for (int i = 0; i < numsSize; i++)
    {
        if (target == nums[i])
        {
            return i;
        }
    }

    if (target > nums[numsSize-1])
    {
        return numsSize;
    }
    else if (target < nums[0])
    {
        return 0;
    }

    for (int i = 0; i < numsSize-1; i++)
    {
        if (target > nums[i] && target < nums[i+1])
        {
            return i+1;
        }
    }
    return 0;
}
