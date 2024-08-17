#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// Optimal Approch
// vector<int> twoSum(vector<int>& nums, int target) {
//     vector<int> ans;
//     int start = 0, end = nums.size() - 1;
//     sort(nums.begin(), nums.end());
//     while(start < end) {
//         if(nums[start] + nums[end] == target) {
//             ans.push_back(start);
//             ans.push_back(end);
//             return ans;
//         } else if(nums[start] + nums[end] < target) {
//             start++;
//         } else {
//             end--;
//         }
//     }
//     return ans;
// }

// int main() {
//     vector<int> nums = {2, 11, 7, 15};
//     int target = 9;
//     vector<int> ans = twoSum(nums, target);
//     for(int i = 0; i < ans.size(); i++) {
//         cout<<ans[i]<<" ";
//     }
//     return 0;
// }
// Time Complexity: O(nlogn)


// Brute Force Approch
vector<int> twoSum(vector<int>& nums, int target) {
    vector<int> ans;
    for(int i = 0; i < nums.size(); i++) {
        for(int j = i + 1; j < nums.size(); j++) {
            if(nums[i] + nums[j] == target) {
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }
    return ans;
}

int main() {
    vector<int> nums = {2, 11, 7, 15};
    int target = 9;
    vector<int> ans = twoSum(nums, target);
    for(int i = 0; i < ans.size(); i++) {
        cout<<ans[i]<<" ";
    }
    return 0;
}

// Time Complexity: O(n^2)