//Task 1.
#include <iostream>

int main() {
    int num;
    std::cout << "Please enter a positive number: ";
    std::cin >> num;

    if (num < 1) {
        std::cout << "The number must be greater than zero!" << std::endl;
        return 1;
    }

    for (int i = num; i > 0; i /= 10) {
        int digit = i % 10;
        std::cout << digit << ' ';
    }
    std::cout << std::endl;

    return 0;
}
//Task 2.
#include <iostream>

int main() {
    int num;
    std::cout << "Please enter a positive number: ";
    std::cin >> num;

    if (num < 0) {
        std::cout << "The number must be greater than zero!" << std::endl;
        return 1;
    }

    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    std::cout << "The sum is " << sum << std::endl;

    return 0;
}
//Task 3.
#include <iostream>

int calculateTotalDistance(int days) {
    int distance = 15; // first day distance
    int totalDistance = distance; // total distance

    for (int i = 2; i <= days; i++) {
        distance += 2; // add 2 cm for each day
        totalDistance += distance; // add both distances
    }

    return totalDistance;
}

int main() {
    int days;

    //in
    std::cout << "Enter the number of days: ";
    std::cin >> days;

    // Calculate the distance for the entered number of days
    int totalDistance = calculateTotalDistance(days);

    // out
    std::cout << "The snail crawled slowly and steadily in " << days << " days: " << totalDistance << " cm" << std::endl;

    return 0;
}
//Task 4.
#include <iostream>
using namespace std;

int main() {
    int result = 0;

    for (int i = 0; i < 9; i++) {
        cout << "Enter 1 (heads) or 0 (tails): ";
        int coin;
        cin >> coin;

        result += coin;
    }

    if (result % 2 == 0) {
        cout << "Positive decision.";
    }
    else {
        cout << "Negative decision.";
    }

    return 0;
}
//Tasks 5 and 6

#include <iostream>
#include <iomanip>

// Function to check if a given year is a leap year
bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

// Function to get the number of days in a given month
int getDaysInMonth(int month, int year) {
    if (month == 2) {
        return isLeapYear(year) ? 29 : 28;
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        return 30;
    } else {
        return 31;
    }
}

// Function to display the calendar for a given month
void displayCalendar(int month, int year, int startDay) {
    int daysInMonth = getDaysInMonth(month, year);
    
    // Output the month and year
    std::cout << "Calendar for " << month << "/" << year << std::endl;
    
    // Output the days of the week
    std::cout << "Mon\tTue\tWed\tThu\tFri\tSat\tSun" << std::endl;
    
    // Output the empty cells for the start day
    for (int i = 0; i < startDay; i++) {
        std::cout << "\t";
    }
    
    // Output the days of the month
    for (int day = 1; day <= daysInMonth; day++) {
        std::cout << day << "\t";
        
        // Check if a new line is needed
        if ((startDay + day) % 7 == 0) {
            std::cout << std::endl;
        }
    }
    
    // Output the number of weekends (Saturdays and Sundays)
    int weekends = 0;
    for (int day = 1; day <= daysInMonth; day++) {
        int dayOfWeek = (startDay + day - 1) % 7;
        if (dayOfWeek == 5 || dayOfWeek == 6) {
            weekends++;
        }
    }
    
    std::cout << "\nNumber of weekends in the month: " << weekends << std::endl;
}

int main() {
    int month, year, startDay;
    
    // Input the month, year, and the day of the week number for the beginning of the month
    std::cout << "Enter the month (1-12): ";
    std::cin >> month;
    
    std::cout << "Enter the year: ";
    std::cin >> year;
    
    std::cout << "Enter the day of the week number for the beginning of the month (0-6 where 0 is Monday): ";
    std::cin >> startDay;
    
    displayCalendar(month, year, startDay);
    
    return 0;
}


