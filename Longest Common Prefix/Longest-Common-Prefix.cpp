class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        string res = "";
        int least = INT_MAX;

        for (int i = 0; i < strs.size(); i++)
            if (least > strs[i].length())
                least = strs[i].length();

        for (int i = 0; i < least; i++) {
            char it = strs[0][i];
            bool flag = true;

            for (int k = 0; k < strs.size(); k++)
                if (it != strs[k][i]) {
                    flag = false;
                    break;
                }

            if (flag)
                res += it;
            else
                return res;
        }

        return res;
    }
};
