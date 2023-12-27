class Solution {
  public:
    vector<int> antiDiagonalPattern(vector<vector<int>> matrix) 
    {
        vector<pair<int, int>> b;

        int n = matrix.size();

        for (int i = 0; i < n; i++) {
            b.push_back(make_pair(0, i));
        }
        for (int j = 1; j < n; j++) {
            b.push_back(make_pair(j, n - 1));
        }
        vector<int> ans;
        int x, y;
        for (int i = 0; i < 2 * n - 1; i++) {
            x = b[i].first;
            y = b[i].second;
            while (x < n && y >= 0) {
                ans.push_back(matrix[x][y]);
                x += 1;
                y -= 1;
            }
        }
        return ans;
    }
};
