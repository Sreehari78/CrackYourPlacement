class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);
        std::cout.tie(nullptr);

        vector<vector<int>> res;
        sort(nums.begin(), nums.end());
        
        for(int left = 0; left < nums.size(); left++) {
            if(left > 0 && nums[left] == nums[left - 1]) continue;
            int mid = left + 1, right = nums.size() - 1;

            while(mid < right) {
                int sum = nums[left] + nums[mid] + nums[right];

                if(sum < 0) mid++;
                else if(sum > 0) right--;
                else {
                    res.push_back({nums[left], nums[mid++], nums[right--]});
                    while(mid < right && nums[mid] == nums[mid - 1]) mid++;
                    while(mid < right && nums[right] == nums[right + 1]) right--;
                }
                
            } 
        }

        return res;
    }
};
