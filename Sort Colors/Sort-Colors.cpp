class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low = 0, high = nums.size() - 1;

        for(int mid = low; mid <= high; mid++) {
            if(nums[mid] == 0) swap(nums[mid], nums[low++]);
            else if(nums[mid] == 2) swap(nums[mid--], nums[high--]);
        }
    }
};
