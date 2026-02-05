// Last updated: 5/2/2026, 11:26:58 pm
class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
int n = nums.size();
 sort(nums.begin(), nums.end());
int i =0;


while( i<n   && nums[i] < 0 && k> 0){



    nums[i] = -(nums[i]);

i++;
k--;

}


if(k%2 == 1){
sort(nums.begin(), nums.end());
nums[0] = -(nums[0]);

}


int sum =0;
for ( int i : nums){
sum += i;
        }

        return sum;
    }
};