// Last updated: 5/2/2026, 11:26:19 pm
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> closestPrimes(int left, int right) {
        // Step 1: Generate primes up to 10^6 using Sieve of Eratosthenes
        const int MAXN = 1e6 + 1;
        vector<bool> isPrime(MAXN, true);
        isPrime[0] = isPrime[1] = false;

        for (int i = 2; i * i < MAXN; ++i) {
            if (isPrime[i]) {
                for (int j = i * i; j < MAXN; j += i) {
                    isPrime[j] = false;
                }
            }
        }

        // Step 2: Collect primes in the given range
        vector<int> primes;
        for (int i = left; i <= right; ++i) {
            if (isPrime[i]) {
                primes.push_back(i);
            }
        }

        // Step 3: Find the closest prime pair
        if (primes.size() < 2) return {-1, -1};

        int minDiff = INT_MAX;
        vector<int> result = {-1, -1};

        for (size_t i = 1; i < primes.size(); ++i) {
            int diff = primes[i] - primes[i - 1];
            if (diff < minDiff) {
                minDiff = diff;
                result = {primes[i - 1], primes[i]};
            }
        }

        return result;
    }
};
