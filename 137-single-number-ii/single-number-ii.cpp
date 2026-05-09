class Solution {
public:
    int singleNumber(vector<int>& nums) {
unordered_map<int ,int> m;

for(auto i : nums){


    m[i]++;


    if(m[i] == 3){

        m.erase(i);
    }
}



 return m.begin()->first;
        
    }
};