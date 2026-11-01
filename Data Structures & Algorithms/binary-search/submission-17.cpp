class Solution {
public:
    int search(vector<int>& nums, int target) {
        auto it = lower_bound(nums.begin(), nums.end(), target);
        if ((it == nums.end()) && (nums[nums.size() -1] != target)){
            return -1;
        }
        if (*it == target){
            return (it - nums.begin());
        }
        return -1;
    }
};
