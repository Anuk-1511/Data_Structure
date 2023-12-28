class Solution {
public:
    vector<string> res;

    void helper(vector<string> &res, string curr, int n, int left, int right) {
        if (curr.length() == n * 2 && left == right) {
            res.push_back(curr);
            return;
        }
        if (left < n) {
            curr.push_back('(');
            helper(res, curr, n, left + 1, right);
            curr.pop_back();
        }
        if (right < left) {
            curr.push_back(')');
            helper(res, curr, n, left, right + 1);
            curr.pop_back();
        }
    }

    vector<string> generateParenthesis(int n) {

        helper(res, "", n, 0, 0);
        return res;
    }
};
