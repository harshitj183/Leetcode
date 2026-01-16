class Solution {
public:
    bool isValid(string s) {

        if (s.size() % 2 != 0) return false;

        string temp = "";   // 🔥 temp ko memory bana diya

        for (int i = 0; i < s.size(); i++) {

            char ch = s[i];

            // opening brackets → temp me add
            if (ch == '(' || ch == '{' || ch == '[') {
                temp.push_back(ch);
            }
            else {
                // closing bracket but no opening remembered
                if (temp.size() == 0) return false;

                char last = temp.back();   // last open
                temp.pop_back();

                // mismatch check (tumhari hi logic)
                if ((last == '(' && ch != ')') ||
                    (last == '{' && ch != '}') ||
                    (last == '[' && ch != ']')) {
                    return false;
                }
            }
        }

        // agar sab close ho gaye
        return temp.size() == 0;
    }
};
