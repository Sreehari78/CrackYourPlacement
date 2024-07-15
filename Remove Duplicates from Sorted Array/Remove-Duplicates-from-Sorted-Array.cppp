class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);
        std::cout.tie(nullptr);
        
        if (nums.size() == 0) return 0;
        
        int res = 1;
        for (int i = 1; i < nums.size(); i++)
            if (nums[i] != nums[i - 1]) {
                nums[res] = nums[i];
                res++;
            }
        return res;
    }
};
