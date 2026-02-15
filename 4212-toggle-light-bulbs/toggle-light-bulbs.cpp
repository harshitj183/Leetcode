class Solution {
public:
    vector<int> toggleLightBulbs(vector<int>& bulbs) {
   
   vector<bool> state(101, false);  
 
    for (int x : bulbs) {
        state[x] = !state[x];
    }
 
    vector<int> result;
    for (int i = 1; i <= 100; i++) {
        if (state[i]) {
            result.push_back(i);
        }
    }

    return result;
    }
};