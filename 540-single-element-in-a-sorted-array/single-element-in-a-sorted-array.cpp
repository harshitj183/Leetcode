class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {

int temp=0;
int j =2;
    for(int i:nums){

if ( j%2==0){

temp = temp +i;
 
}
else
  {
temp=  temp - i;
}
j++; 
    }


return temp;
    }
};