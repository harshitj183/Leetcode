class Solution {
public:
    vector<int> countBits(int n) {


vector <int> arr;

for(int i =0;i<=n;i++){
int num = i;


int count =0;
while(num){


if(num & 1)
    count++;
num = num>>1;





}

arr.push_back(count);




}

    return arr;    
    }
};