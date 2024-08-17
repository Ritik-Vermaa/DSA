#include<iostream>
#include<vector>
using namespace std;

int peakElement(vector<int> &nums) {
    int n = nums.size();
    int start = 0, end = n-1;
    while(start < end) {
        int mid = start + (end - start) / 2;
        if(nums[mid] > nums[mid+1]) {
            end = mid;
        } else {
            start = mid + 1;
        }
    }
    return start;
}

int main() {
    vector<int> nums = {1, 2, 3, 1};
    cout << peakElement(nums) << endl;
    return 0;
}
