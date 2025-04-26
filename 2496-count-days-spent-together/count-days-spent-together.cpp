class Solution {
public:
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {

int daysInMonth[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};


 int month1alice =  stoi(arriveAlice.substr(0, 2));

 
 int month1bob =  stoi(arriveBob.substr(0, 2));



 int month2alice =  stoi(leaveAlice.substr(0, 2));

 
 int month2bob =  stoi(leaveBob.substr(0, 2));



 int days1alice =  stoi(arriveAlice.substr(3, 2));

 
 int days1bob =  stoi(arriveBob.substr(3, 2));



 int days2alice =  stoi(leaveAlice.substr(3, 2));

 
 int days2bob =  stoi(leaveBob.substr(3, 2)); 

 int totalalicearrive  = days1alice ;
for (int i = 0 ; i < month1alice;i++  )
{
totalalicearrive  += daysInMonth[i] ;

}
 int totalbobarrive  = days1bob ;
for (int i = 0 ; i < month1bob;i++  )
{
totalbobarrive  += daysInMonth[i] ;
}





 int totalalicearrive2  = days2alice ;
for (int i = 0 ; i < month2alice;i++  )
{
totalalicearrive2  += daysInMonth[i] ;

}
 int totalbobarrive2  = days2bob ;
for (int i = 0 ; i < month2bob;i++  )
{
totalbobarrive2  += daysInMonth[i] ;
}

 int start = max(totalalicearrive,totalbobarrive);
        int end = min(totalalicearrive2,totalbobarrive2);


 if (start > end) {
            return 0;
        } else {
            return end - start + 1;
        }
        
    }
};