class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int hare = 0, tortise = 0;

        do {
            hare = nums[nums[hare]];
            tortise = nums[tortise];
        } while(hare != tortise);

        tortise = 0;

        while(hare != tortise) {
            hare = nums[hare];
            tortise = nums[tortise];            
        }

        return tortise;
    }
};
