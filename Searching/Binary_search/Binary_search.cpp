#include <bits/stdc++.h>
using namespace std;


int binary_search_iterative(vector<int> &arr, int target) {
    int left = 0;
    int right = arr.size() - 1;

    // Lower bound: first index where arr[index] >= target
    // Upper bound: first index where arr[index] > target

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target)
            return mid; // Found
        else if (arr[mid] < target)
            left = mid + 1; // Search right half
        else
            right = mid - 1; // Search left half
    }
    return -1; // Not found
}


int binary_search_recursive(vector<int> &arr, int target, int left, int right) {
    if (left > right)
        return -1; // Base case: not found

    int mid = left + (right - left) / 2;

    if (arr[mid] == target)
        return mid; // Found
    else if (arr[mid] < target)
        return binary_search_recursive(arr, target, mid + 1, right); // Search right half
    else
        return binary_search_recursive(arr, target, left, mid - 1);  // Search left half
}


int main() {
    vector<int> arr = {1, 3, 5, 7, 9, 11, 13};
    int target = 7;

    // Iterative search
    int idx_iter = binary_search_iterative(arr, target);
    if (idx_iter != -1)
        cout << "Iterative: Found at index " << idx_iter << endl;
    else
        cout << "Iterative: Not found" << endl;

    // Recursive search
    int idx_rec = binary_search_recursive(arr, target, 0, arr.size() - 1);
    if (idx_rec != -1)
        cout << "Recursive: Found at index " << idx_rec << endl;
    else
        cout << "Recursive: Not found" << endl;

    return 0;
}
