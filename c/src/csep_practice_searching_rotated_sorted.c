int bsearch(const int* nums,const int numsSize,const int target) {
    int left = 0;
    int right = numsSize - 1;
    while (left < right) {
        const int mid = left + (right - left) / 2;
        if (nums[mid] > nums[right])
            left = mid + 1;
        else
            right = mid;
    }
    const int pivot = left;
    int low, high;
    if (target >= nums[pivot] && target <= nums[numsSize - 1]) {
        low = pivot;
        high = numsSize - 1;
    } else {
        low = 0;
        high = pivot - 1;
    }
    while (low <= high) {
        const int mid = low + (high - low) / 2;
        if (nums[mid] == target)
            return mid;
        if (nums[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}
