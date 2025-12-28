class Solution {
private:
    void func(vector<string>& res, string& ans, int open, int close) {
        if(!open && !close) {
            res.push_back(ans);
            return;
        }

        if(open) {
            ans.push_back('(');
            func(res, ans, open-1, close);
            ans.pop_back();
        }

        if(close && open < close) {
            ans.push_back(')');
            func(res, ans, open, close-1);
            ans.pop_back();
        }
    }
public:
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string str = "";
        func(ans, str, n, n);
        return ans;
    }
};