class Solution {
public:
    bool canAliceWin(int n) {




bool alice = false;
int curr = 10;
int val = n;

while(val>=curr ){

val -= curr;
curr--;
alice = !alice;

}








return alice == true;


    }
};