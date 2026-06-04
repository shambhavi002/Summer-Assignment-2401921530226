class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;

        int row = matrix.size();
        int col = matrix[0].size();

        int startingRow = 0;
        int startingCol = 0;
        int endingRow = row - 1;
        int endingCol = col - 1;

        while (startingRow <= endingRow && startingCol <= endingCol) {

            for (int i = startingCol; i <= endingCol; i++) {
                ans.push_back(matrix[startingRow][i]);
            }
            startingRow++;

            for (int i = startingRow; i <= endingRow; i++) {
                ans.push_back(matrix[i][endingCol]);
            }
            endingCol--;
            if (startingRow <= endingRow) {
                for (int i = endingCol; i >= startingCol; i--) {
                    ans.push_back(matrix[endingRow][i]);
                }
                endingRow--;
            }

            if (startingCol <= endingCol) {
                for (int i = endingRow; i >= startingRow; i--) {
                    ans.push_back(matrix[i][startingCol]);
                }
                startingCol++;
            }
        }

        return ans;
    }
};
