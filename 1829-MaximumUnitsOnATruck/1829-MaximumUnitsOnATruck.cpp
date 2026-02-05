// Last updated: 5/2/2026, 11:26:33 pm
class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
  
for( auto  &i : boxTypes){

swap(i[0],i[1]);
 
}
 
sort(boxTypes.begin(),boxTypes.end()) ;
reverse(boxTypes.begin(),boxTypes.end()) ;


int count =0;
int remain = truckSize;

 for(auto &j : boxTypes )

 if (remain>=j[1] ){

  count +=   j[1]  * j[0];
  remain -= j[1];
 }

else{

   count += remain * j[0];
  break ;
   
}

return count;
    }
};


