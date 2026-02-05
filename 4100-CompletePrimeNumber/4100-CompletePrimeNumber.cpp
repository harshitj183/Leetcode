// Last updated: 5/2/2026, 11:25:53 pm
class Solution {
public:
    bool isPrime(int x) {
        if (x < 2) return false;
        for (int i = 2; i * 1LL * i <= x; i++) {
            if (x % i == 0) return false;
        }
        return true;
    }
    

    bool completePrime(int num) {
        string s = to_string(num);
        int n = s.size();

        for (int k = 1; k <= n; k++) {
            int prefix = stoi(s.substr(0, k));
            int suffix = stoi(s.substr(n - k, k));

            if (!isPrime(prefix) || !isPrime(suffix)) {
                return false;
            }
        }
        return true;
    }
};