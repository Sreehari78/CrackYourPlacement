class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);
        std::cout.tie(nullptr);

        vector<int> res;
        int i = 0, j = 0, count = 0;

        while (count < matrix[0].size()) {
            while (j < matrix[0].size()) {
                if (matrix[i][j] < 101)
                    res.push_back(matrix[i][j]);
                else
                    break;

                matrix[i][j] = 101;
                j++;
            }

            j--;
            i++;

            while (i < matrix.size()) {
                if (matrix[i][j] < 101)
                    res.push_back(matrix[i][j]);
                else
                    break;

                matrix[i][j] = 101;
                i++;
            }

            i--;
            j--;

            while (j > -1) {
                if (matrix[i][j] < 101)
                    res.push_back(matrix[i][j]);
                else
                    break;

                matrix[i][j] = 101;
                j--;
            }

            j++;
            i--;

            while (i > -1) {
                if (matrix[i][j] < 101)
                    res.push_back(matrix[i][j]);
                else
                    break;
                    
                matrix[i][j] = 101;
                i--;
            }

            i++;
            j++;

            count++;
        }

        return res;
    }
};
