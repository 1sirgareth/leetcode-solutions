int removeDuplicates(int* nums, int numsSize) 
{
    int duplicates = 0;
    int index = 0; // This is where the last unique number is storied. 

    for (int i = 1; i < numsSize; i++)
    {
        if (nums[i] > nums[index])
        {
            nums[index + 1] = nums[i];
            index = index + 1;
        }
        else if (nums[i] == nums[index])
        {
            duplicates++;
        }
    }
    return numsSize - duplicates;
}
