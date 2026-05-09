class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        
int s = nums.size();


vector <vector <int>> res;

    int total = 1 << s;

    for (int i = 0; i < total; i++) {
        string temp = bitset<32>(i).to_string().substr(32 - s) ;
   vector <int >restemp;
        for(int j = 0 ; j< s;j++){

        if(temp[j] == '1'){
restemp.push_back(nums[j]);

        }
        }


        res.push_back(restemp);
    }








return res;



    }
};