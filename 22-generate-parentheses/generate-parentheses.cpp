class Solution {
public:
    vector<string> res;

    bool isValid(string str) {
        vector<int> check;
        int s = str.size();

        for (int i = 0; i < s; i++) {
            if (str[i] == '(') {
                check.push_back(1);
            }
            if (str[i] == ')') {
                if (check.size() > 0 && check[check.size() - 1] == 1) {
                    check.pop_back();
                } else {
                    check.push_back(-1);
                }
            }
        }
        return (check.size() == 0);
    }

    void solve(string &curr, int n) {
        if (curr.size() == 2 * n) {
            if (isValid(curr)) {
                res.push_back(curr);
            }
            return;
        }

        curr.push_back('(');
        solve(curr, n);
        curr.pop_back();

        curr.push_back(')');
        solve(curr, n);
        curr.pop_back();
    }

    vector<string> generateParenthesis(int n) {
        string cur;
        solve(cur, n);
        return res;
    }
};
