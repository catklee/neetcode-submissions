class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> nums1;
        for (int i = 0; i < nums.size(); i++){
            int size = nums1.size();
            nums1.insert(nums[i]);
            if (nums1.size() == size){
                return true;
            }
        }
        return false;
    }
};