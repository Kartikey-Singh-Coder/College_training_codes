int bin_search(const int *array,int size,int target) {
    int low=0;
    int high=size-1;
    while (low<=high) {
        int mid = low + (high - low) / 2;
        if (array[mid] == target) return mid;
        else  if (array[mid] > target) {
            high = mid - 1;
        }
        else low = mid + 1;
    }
    return -1;
}