#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
class Solution {
    public:
        int minSubArrayLen(int target, vector<int>& nums) {
            int n = nums.size();
            int min_length = INT_MAX;
            int window_sum = 0;
            int left = 0;

            for (int right = 0; right < n; right++) {
                window_sum += nums[right];

                while (window_sum >= target) {
                    min_length = min(min_length, right - left + 1);
                    window_sum -= nums[left];
                    left++;
                }
            }

            return (min_length == INT_MAX) ? 0 : min_length;
        }
};

int main() {
    Solution sol;
    vector<int> nums = {2, 3, 1, 2, 4, 3};
    int target = 7;
    cout << sol.minSubArrayLen(target, nums) << endl; 
    return 0;
}