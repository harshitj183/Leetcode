class Solution {
public:

bool isValid(int n){

    int original = n;

    while (n > 0){

        int digit = n % 10;   // last digit

        if (digit == 0)       // cannot divide by 0
            return false;

        if (original % digit != 0)
            return false;

        n /= 10;              // remove last digit
    }

    return true;
}


    vector<int> selfDividingNumbers(int left, int right) {
vector <int>  res;


for ( int i  = left ;  i <= right ;i++){


if ( isValid(i)){


    res.push_back(i);
}


}



   return res;     
    }
};