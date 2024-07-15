class Solution {
public:
    int maxArea(vector<int>& height) {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);
        std::cout.tie(nullptr);
        
        int left = 0, right = height.size() - 1, res = 0;

        while (left < right)
            if (height[left] < height[right])
                res = max(res, (right - left) * height[left++]);
            else
                res = max(res, (right - left) * height[right--]);

        return res;
    }
};
