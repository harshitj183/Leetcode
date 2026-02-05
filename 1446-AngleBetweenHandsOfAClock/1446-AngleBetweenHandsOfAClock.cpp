// Last updated: 5/2/2026, 11:26:42 pm
class Solution {
public:
    double angleClock(int hour, int minutes) {
        
       auto hourHandPosition = 30.0 * hour + 0.5 * minutes;

                      auto minuteHandPosition = 6.0 * minutes;

             auto angleDifference = abs(hourHandPosition - minuteHandPosition);

     
        double smallerAngle = min(angleDifference, 360.0 - angleDifference);
 
        return smallerAngle;
    }
};