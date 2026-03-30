class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people) {

 
 vector<int> ans(num_people, 0);
  int idx =0;
  int acc= 1;
 while(candies>0){
 

if (candies>=acc){
     
ans[idx] += acc;


 candies -= acc;
}
else{
  
ans[idx] += candies;

    candies  = 0;
   

}

idx++;
acc++;



if (idx == num_people){

    idx = 0;

}
 }

return ans;

    }
};