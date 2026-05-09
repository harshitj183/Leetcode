class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {


int count =0;

   //Smaller ending = better choice
       if(intervals.empty()) return 0;

        sort(intervals.begin(), intervals.end(),
             [](vector<int>& a, vector<int>& b) {
                 return a[1] < b[1];
             });

         int starting = intervals[0][0];
         int ending = intervals[0][1];
      

        for(int i  =1 ; i< intervals.size();i++){

         int s = intervals[i][0];
         int f = intervals[i][1];
      
 if  (s  < ending){

    count++;
    continue;
 }
    

starting = s;
ending = f;
 

            
        }

        return count;
        
    }
};