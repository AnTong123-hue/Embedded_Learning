#include <iostream>

using namespace std;

class Time {
    private:
        int hour;
        int minute;
        int second;
    public:
        Time(int hour, int minute, int second) {
            this->hour = hour;
            this->minute = minute;
            this->second = second;
        }
        void setTime(int hour, int minute, int second) {
            this->hour = hour;
            this->minute = minute;
            this->second = second;
        }
        void setHour(int hour) {
            this->hour = hour;
        }
        void setMinute(int minute) {
            this->minute = minute;
        }
        void setSecond(int second) {
            this->second = second;
        }
        int getHour() {
            return hour;
        }
        int getMinute() {
            return minute;
        }
        int getSecond() {
            return second;
        }
        void nextSecond() {
            this->second++;
            if (this->second == 60)
            {
                this->second = 0;
                this-> minute++;
                if (this->minute == 60)
                {
                    this->minute = 0;
                    this->hour++;
                }
            }
        }
        void previousSecond() {
            this->second--;
            if(this->second == -1)
            {
                this->second = 59;
                this->minute--;
                if (this->minute == -1)
                {
                    this->minute = 59;
                    this->hour--;
                }
            }
        }
        void display() {
            if (hour < 10) {
                cout << "0" << hour << ":";
            } else {
                cout << hour << ":";
            }
            if (minute < 10) {
                cout << "0" << minute << ":";
            } else {
                cout << minute << ":";
            }
            if (second < 10) {
                cout << "0" << second << endl;
            } else {
                cout << second << endl;
            }
        }
};