#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int threeSumClosest(int* nums, int numsSize, int target) {
    int diff = 0;
    int minDiff = INT_MAX;
    int sum = 0;
    for(int j = 0; j < (numsSize - 2); j++) {
        for(int k = j + 1; k < (numsSize - 1); k++) {
            for(int l = k + 1; l < (numsSize); l++) {
                diff = abs(target - (*(nums + j) + *(nums + k) + *(nums + l)));
                if(diff < minDiff) {
                    minDiff = diff;
                    sum = *(nums + j) + *(nums + k) + *(nums + l);
                }
            }
        }
    }
    return sum; 
}

int main() {
    int nums1[] = {-1, 2, 1, -4};
    int target1 = 1;
    int numsSize1 = sizeof(nums1) / sizeof(nums1[0]);
    printf("Output for Example 1: %d\n", threeSumClosest(nums1, numsSize1, target1));

    int nums2[] = {0, 0, 0};
    int target2 = 1;
    int numsSize2 = sizeof(nums2) / sizeof(nums2[0]);
    printf("Output for Example 2: %d\n", threeSumClosest(nums2, numsSize2, target2));

    return 0;
}