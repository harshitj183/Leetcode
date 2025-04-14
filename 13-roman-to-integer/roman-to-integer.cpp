class Solution {
public:
    int romanToInt(string s) {

 unordered_map <char,int> dis{
        {'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};

int res=0;
for(int i=0;i<s.size();i++)
{

 if(dis[s[i]]<dis[s[i+1]]){


res -=  dis[s[i]];


}
else {
    res += dis[s[i]];
}
}

return res;
        
    }
};