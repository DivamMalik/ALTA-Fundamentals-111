#include <stdio.h>
int main() {
    int day, month, year;
    int max_days;
    if (scanf("%d %d %d", &day, &month, &year) != 3) {
        printf("Invalid Date\n");
        return 0;
    }
    if (year <= 0 || month < 1 || month > 12) {
        printf("Invalid Date\n");
    }
    else {
        if (month == 2) {
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
                max_days = 29;
            } else {
                max_days = 28;
            }
        }
        else if (month == 4 || month == 6 || month == 9 || month == 11) {
            max_days = 30;
        }
        else {
            max_days = 31;
        }
        if (day < 1 || day > max_days) {
            printf("Invalid Date\n");
        } else {
            printf("Valid Date\n");
        }
    }
}
