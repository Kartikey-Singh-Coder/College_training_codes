#include<vector>
std::vector<int>merge_2_sorted_vectors(const std::vector<int>& arr1,const std::vector<int> & arr2) {
    std::vector<int> result;
    int p1 = 0,p2 = 0;
    while ( p1 < arr1.size() && p2 < arr2.size() ) {
        if (arr1[p1] <= arr2[p2]) {
            result.push_back(arr1[p1]);
            p1++;
        }
        else {
            result.push_back(arr2[p2]);
            p2++;
        }
    }
    while (p1<arr1.size()) {
        result.push_back(arr1[p1]);
    }
    while (p2<arr2.size()) {
        result.push_back(arr2[p2]);
    }
    return result;
}
std::vector<int>mergeVector(std::vector<int> &arr,const int low,const int mid,const int high) {
    int p1 = low,p2=mid+1;
    std::vector<int> result;
    result.reserve(high-low+1);
    while ( p1 <= mid && p2 <= high ) {
        if (arr[p1] <= arr[p2]) {
            result.push_back(arr[p1++]);
        }
        else {
            result.push_back(arr[p2++]);
        }
    }
    while (p1 <= mid) {
        result.push_back(arr[p1++]);
    }
    while (p2 <= high) {
        result.push_back(arr[p2++]);
    }
    for (int i = 0; i < result.size(); i++) {
        arr[low + i] = result[i];
    }
    return arr;
}
void mergesort(std::vector<int> &arr,const int low,const int high) {
    if ( low >= high ) return;
    const int mid = low + (high-low)/2;
    mergesort(arr,low,mid);
    mergesort(arr,mid+1,high);
    mergeVector(arr,low,mid,high);
}