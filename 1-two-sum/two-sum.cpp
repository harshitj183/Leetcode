class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
int ic  =0;
vector<int> res;
for(int i : nums){


int jc =0;
    for(int j : nums){




if (ic !=jc  && i +j == target){


 res  = {ic ,jc};

 break;
}


 jc++;
    }

ic++;

}





return res;
        
    }
};