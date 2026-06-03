void moveZeroes(int* nums, int numsSize) {
    int i = 0;
    int j = 1;
    int temp=0;
    while (i< numsSize && j < numsSize){
        if (nums[i] == 0 && nums[j] !=0){
            temp = nums[i];
            nums[i] = nums[j];
            nums[j] = temp;
            i++; j++;
        }
        else if ( nums[i] == 0 && nums[j] == 0){
            j++;
        }
        else if (nums[i] != 0 && nums [j] == 0){
            i++;j++;
        }
        else if (nums[i] != 0  && nums[j] != 0){
            i++;j++;
        }
    }
    return;
    
}
