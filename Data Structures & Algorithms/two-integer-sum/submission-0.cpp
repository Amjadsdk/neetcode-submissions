class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> seen;

        for(int i = 0; i < nums.size(); i++){
            int tar = target - nums[i];

            if(seen.find(tar) != seen.end()) return {seen[tar], i};

            seen[nums[i]] = i;
        }
    }
};
