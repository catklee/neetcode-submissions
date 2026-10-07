class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::sort(nums.begin(), nums.end()); 
        if (nums.empty()){
            return false;
        }   
        for (size_t i = 0; (i < nums.size() - 1); i++){
            if (nums[i] == nums [i+1]){
                return true;
            }
        }
        return false;
    }
};