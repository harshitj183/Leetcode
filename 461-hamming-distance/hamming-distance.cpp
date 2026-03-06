class Solution {
public:
    int hammingDistance(int x, int y) {
        int ans = 0;
        for(int i = 31; i>=0; i--){
            if(x%2 != y%2)
            ans++;

            x /= 2;
            y /= 2;
        }
        return ans;
    }
};