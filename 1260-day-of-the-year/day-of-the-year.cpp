class Solution {
public:
    int dayOfYear(string date) {
        int year = stoi(date.substr(0, 4)), month = stoi(date.substr(5, 2)), day = stoi(date.substr(8, 2));
        vector<int> daysInMonth = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) daysInMonth[1] = 29;

        int dayOfYear = day;
                        for (int i = 0; i < month - 1; ++i) dayOfYear += daysInMonth[i];

        return dayOfYear;
    }
};