class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people) {
 vector <int> res(num_people,0);
 
int idx =0;
int cur = 1;


 while( candies>0){






if (cur <= candies){

res[idx] += cur;

candies -= cur;



}
else{

res[idx] += candies;
candies =0;


}

idx++;
cur++;

if ( idx == num_people){

    idx =0;
}

 }








return res;

    }
};