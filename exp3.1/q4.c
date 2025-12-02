#include <stdio.h>

int main() {
    int year, day;
    int leapYears, normalYears, totalDays;

    // Input year
    printf("Enter the year: ");
    scanf("%d", &year);

    // Since 01/01/01 was Monday
    // Calculate number of leap years and normal years before the given year
    leapYears = (year - 1) / 4 - (year - 1) / 100 + (year - 1) / 400;
    normalYears = (year - 1) - leapYears;

    // Total days passed since year 1
    totalDays = normalYears * 365 + leapYears * 366;

    // Find the day (0 = Monday, 1 = Tuesday, ...)
    day = totalDays % 7;

    printf("On 1st January %d, the day was: ", year);

    switch (day) {
        case 0: printf("Monday\n"); break;
        case 1: printf("Tuesday\n"); break;
        case 2: printf("Wednesday\n"); break;
        case 3: printf("Thursday\n"); break;
        case 4: printf("Friday\n"); break;
        case 5: printf("Saturday\n"); break;
        case 6: printf("Sunday\n"); break;
    }

    return 0;
}