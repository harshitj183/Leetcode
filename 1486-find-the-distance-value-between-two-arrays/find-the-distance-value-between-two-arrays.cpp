class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int distanceValue = 0;  
        for (int x : arr1) {
            bool isValid = true;  
            for (int y : arr2) {
                if (abs(x - y) <= d) {  
                    isValid = false;  
                    break;  
                }
            }
             
            if (isValid) {
                distanceValue++;
            }
        }
        
        return distanceValue; 
    }
};