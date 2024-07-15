class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);
        std::cout.tie(nullptr);

        unordered_map<int, int> mp;

        for(int i = 0; i < nums.size(); i++) 
            if(mp[nums[i]]) return {i, mp[nums[i]] - 1};
            else mp[target - nums[i]] = i + 1;

        return {};
    }
};
