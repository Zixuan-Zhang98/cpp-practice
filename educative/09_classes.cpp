#include <iostream>
using namespace std;

int main() {

}

class DayOfYear {
    public:
        DayOfYear(int new_month, int new_day);
        DayOfYear();
        int myVar;
        void output();
        int get_month();
        int get_day();

    private:
        void check_date();
        int month;
        int day;
};

DayOfYear::DayOfYear(int new_month, int new_day) {
    month = new_month;
    day = new_day;
}

DayOfYear::DayOfYear() {
    month = 0;
    day = 0;
}

int DayOfYear::get_month() {
    return month;
}

int DayOfYear::get_day() {
    return day;
}