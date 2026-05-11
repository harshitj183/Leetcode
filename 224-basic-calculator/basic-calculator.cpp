#include <stack>
#include <string>
#include <cctype>
using namespace std;

class Solution {
public:
    int calculate(string s) {

        stack<int> stk;

        int n = s.size();

        long long number = 0;
        int result = 0;
        int sign = 1;

        for (int i = 0; i < n; i++) {

            if (isdigit(s[i])) {

                number = (number * 10 )+ (s[i] - '0');
            }

            else if (s[i] == '+') {

                result += number * sign;

                number = 0;
                sign = 1;
            }

            else if (s[i] == '-') {

                result += number * sign;

                number = 0;
                sign = -1;
            }

            else if (s[i] == '(') {

                stk.push(result);
                stk.push(sign);

                result = 0;
                number = 0;
                sign = 1;
            }

            else if (s[i] == ')') {

                result += number * sign;

                number = 0;

                int stack_sign = stk.top();
                stk.pop();

                int last_result = stk.top();
                stk.pop();

                result *= stack_sign;

                result += last_result;
            }
            else if (s[i] == ' ') {
    continue;
}
        }

        result += number * sign;

        return result;
    }
};