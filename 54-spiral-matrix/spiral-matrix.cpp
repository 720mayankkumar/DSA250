class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();
        int count = 0;
        int total = row * col;

        int start_row = 0, end_row = row - 1;
        int start_col = 0, end_col = col - 1;

        vector<int> ans;

        while (count < total) {
            // Traverse top row
            for (int i = start_col; i <= end_col && count < total; i++) {
                ans.push_back(matrix[start_row][i]);
                count++;
            }
            start_row++;

            // Traverse right column
            for (int i = start_row; i <= end_row && count < total; i++) {
                ans.push_back(matrix[i][end_col]);
                count++;
            }
            end_col--;

            // Traverse bottom row
            for (int i = end_col; i >= start_col && count < total; i--) {
                ans.push_back(matrix[end_row][i]);
                count++;
            }
            end_row--;

            // Traverse left column
            for (int i = end_row; i >= start_row && count < total; i--) {
                ans.push_back(matrix[i][start_col]);
                count++;
            }
            start_col++;
        }

        return ans;
    }
};
