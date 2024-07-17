class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);
        std::cout.tie(nullptr);

        vector<int> res;

        for (int i = 0; i < nums.size(); i++)
            nums[(nums[i] - 1) % nums.size()] += nums.size();

        for (int i = 0; i < nums.size(); i++)
            if ((nums[i] - 1) / nums.size() > 1)
                res.push_back(i + 1);

        return res;
    }
};
