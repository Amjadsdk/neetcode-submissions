class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> seen;
        for(int i = 0; i < nums.size(); i++){
            if(seen.find(nums[i]) != NULL){
                return true;
            }
            seen.insert(nums[i]);
        }
        return false;
    }
};