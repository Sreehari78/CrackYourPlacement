class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0, candidate = -1;

        for(int it: nums) 
            if(it == candidate) count++;
            else if(count == 0) candidate = it;
            else count--;

        return candidate;
    }
};
