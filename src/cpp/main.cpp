/*
 * Author: Abdusamad Nigmatov
 * Date: 25.10.2023
 */

#include <iostream>
#include "task_1.h"

class leapYear {
public:
    void leapYearValue(int year) {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            std::cout << year << " is a leap year." << std::endl;
        } else {
            std::cout << year << " is not a leap year." << std::endl;
        }
    }
};



using namespace std;
int main() {
    leapYear year_1;
    cout<<"Task_1"<<endl;
    cout<<"Please enter a year: "<<endl;
    int x;
    cin>>x;
    year_1.leapYearValue(x);

    std::cout << "Task 2 - Python" << std::endl;
    // call for task 2
    std::cout << "Task 3 - Python" << std::endl;
    // call for task 3
    std::cout << "Task 4 - Python" << std::endl;
    // call for task 4
    std::cout << "Task 5" << std::endl;
    // call for task 5
    return 0;
}
