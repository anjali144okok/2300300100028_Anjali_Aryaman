#include<iostream>
#include<vector>
using namespace std;
class Solution {
    public:
        double findMaxAverage(vector<int>& nums, int k) {
            int n = nums.size();
            double max_sum = 0;
            double window_sum = 0;
            
            // Calculate the sum of the first window of size k
            for (int i = 0; i < k; i++) {
                window_sum += nums[i];
            }
            max_sum = window_sum;
            
            // Slide the window over the array
            for (int i = k; i < n; i++) {
                window_sum += nums[i] - nums[i - k]; 
                max_sum = max(max_sum, window_sum); 
            }

            return max_sum / k; 
        }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 12, -5, -6, 50, 3};
    int k = 4;
    cout << sol.findMaxAverage(nums, k) << endl; 
    return 0;
}