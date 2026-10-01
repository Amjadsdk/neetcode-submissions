class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> seen;
        for(int i = 0; i < nums.size(); i++){
            int tar = target - nums[i];
            auto idx = seen.find(tar);
            if(idx != seen.end()){
                vector<int> res = {idx->second, i};
                return res;
            }

            seen[nums[i]] = i;
        }
    }
};
