class Solution {
public:
    string reverseWords(string s) {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);
        std::cout.tie(nullptr);
        
        stack<string> st;
        string res = "", word = "";

        for (char it : s) 

            if (isalpha(it) || isdigit(it))
                word += it;
            else if (it == ' ' && word.length()) {
                if (word != "")
                    st.push(word);
                word = "";
            }

        if (word != "")
            st.push(word);

        while (st.size()) {
            res += st.top();
            st.pop();
            if (st.size())
                res += ' ';
        }

        return res;
    }
};
