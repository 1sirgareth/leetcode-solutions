double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) 
{
    int left_finger = 0;
    int right_finger = 0;
    int nums[nums1Size + nums2Size];

    int counter = 0;
    while (counter < nums1Size + nums2Size)
    {
        if (nums1Size == 0 || nums2Size == 0)
        {
            break;
        }
        if (nums1[left_finger] <= nums2[right_finger])
        {
            nums[counter] = nums1[left_finger];
            left_finger++;
        }
        else if (nums2[right_finger] < nums1[left_finger])
        {
            nums[counter] = nums2[right_finger];
            right_finger++;
        }
        counter++;
        if (left_finger == nums1Size || right_finger == nums2Size)
        {
            break;
        }
    }
    if ( left_finger == nums1Size && right_finger != nums2Size )
    {
        while (counter < nums1Size + nums2Size)
        {
            nums[counter] = nums2[right_finger];
            right_finger++;
            counter++;
        }
    }
    else if ( left_finger != nums1Size && right_finger == nums2Size )
    {
        while (counter < nums1Size + nums2Size)
        {
            nums[counter] = nums1[left_finger];
            left_finger++;
            counter++;
        }
    }
    counter--;
    if ( counter % 2 == 0)
    {
        int index = counter / 2;
        double returnvalue = (double) nums[index];
        return returnvalue; 
    }
    else 
    {
        counter++;
        int index1 = counter/2;
        int index2 = index1 - 1;  
        double returnvalue = (double) (nums[index1] + nums[index2])/2;
        return returnvalue;
    }
    return 0;
}
