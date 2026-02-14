class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        int n = arr.size();
sort(arr.begin(),arr.end());

        if ( n <3) return true;


int gap = arr[0]-arr[1];

    for( int  i =1; i< n; i++){
if (    gap !=(arr[i-1]-arr[i] )) return false;


    }

return true;

    }
};