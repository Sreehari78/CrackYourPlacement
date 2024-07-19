class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);
        std::cout.tie(nullptr);

        vector<string> temp = strs;
        unordered_map<string, vector<int>> mp;
        vector<vector<string>> res;

        for (int i = 0; i < temp.size(); i++)
            sort(temp[i].begin(), temp[i].end());

        for (int i = 0; i < temp.size(); i++)
            mp[temp[i]].push_back(i);

        for (auto it : mp) {
            vector<string> ans;

            for (int idx : it.second)
                ans.push_back(strs[idx]);

            res.push_back(ans);
        }

        return res;
    }
};
