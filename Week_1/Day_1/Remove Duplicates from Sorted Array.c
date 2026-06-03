int removeDuplicates(int* nums, int numsSize) {
    if (numsSize==0) return 0;
    int k=0;
    for (int i=0; i<numsSize; i++){
        int j=i+1;
       while (j < numsSize && nums[i] == nums[j]) {
            j++;
        }
         if (j < numsSize) {
            nums[k + 1] = nums[j];
            k++;
        }

        i = j - 1;
    }

    return k + 1;
}
