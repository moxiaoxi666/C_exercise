#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int removeDuplicates(int* nums, int numsSize);
int main()
{
    int nums[] = { 5,6,8,5,4,6 };
    int len = sizeof(nums) / sizeof(nums[0]);
    removeDuplicates(nums, len);
    return 0;

}

int removeDuplicates(int* nums, int numsSize)
{
    int* src = nums;
    int* dst = nums;
    int i = 0;
    int k = 0;
    for (i = 0; i < numsSize - 1; i++)
    {
        for (k = 0; k < numsSize - i - 1; k++)
        {
            if (nums[k] > nums[k + 1])
            {
                int temp = nums[k];
                nums[k] = nums[k + 1];
                nums[k + 1] = temp;
            }
        }
    }
    for (i = 0; i < numsSize; i++)
    {
        if (*dst == *src)
        {
            src++;
        }
        else
        {
            dst++;
            *dst =*src;
            src++;
        }
    }
    int h = 0;
    int q = dst - nums + 1;
    for (h = 0; h < (dst - nums + 1); h++)
    {
        printf("%d ", nums[h]);
    }
    return q;
}