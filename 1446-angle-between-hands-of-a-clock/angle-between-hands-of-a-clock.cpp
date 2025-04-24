class Solution {
public:
    double angleClock(int hour, int minutes) { 
        double hour_angle = 30.0 * hour + 0.5 * minutes; 
        double minute_angle = 6.0 * minutes;            
         
        double angle_between = abs(hour_angle - minute_angle);
        
      
        return min(angle_between, 360.0 - angle_between);
    }
};