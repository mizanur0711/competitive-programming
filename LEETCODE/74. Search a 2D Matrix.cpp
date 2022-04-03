class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size() - 1;
        int n = matrix[0].size() - 1;
        int l = 0;
        int r = n;
        int i = 0, j;
        while (i <= m && l <= r)
        {
            j = l + (r - l) / 2;
            if (matrix[i][j] == target)
            {
                return true;
            }
            else if (matrix[i][n] < target)
            {
                i++;
                l = 0;
                r = n;
            }
            else if (matrix[i][j] > target)
            {
                r = j - 1;
            }
            else
            {
                l = j + 1;
            }
        }
        return false;

    }
};