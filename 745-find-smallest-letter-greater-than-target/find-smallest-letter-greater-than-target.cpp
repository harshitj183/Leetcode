class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        

char res = letters[0];



sort(letters.begin(),letters.end());
for(char c : letters ){

    if (c > target){

        res = c;
 break;

    }
}

return res;


    }
};