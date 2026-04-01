class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {




     vector <int> res;



for(int i =0; i<   2 *  (nums.size());i++){






res.push_back(nums[i]);




if (i == nums.size()-1 ){

i = -1;

}



if ( res.size()  ==  2 *  (nums.size())){

    break ;

} 


}





















       return res;






    }
};