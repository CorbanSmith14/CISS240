// Name: Oladayo Robert Oyedeji
// File: a10q01
//
// Description
// This program prompts the user for the employee type and
// the number of hours worked.  It then prints the salary
// earned for that employee and also the total salary to be
// paid out to all employees.

#include <iostream>
#include <iomanip>
#include <cmath>

int main()
{
    int type;
    const double HOURLY_WAGE0 = 10.5,
        HOURLY_WAGE1 = 8.5,
        HOURLY_WAGE2 = 6.1,
        BASE0 = 1000,
        BASE1 = 960.5,
        BASE2 = 0,
        OVERTIME_WAGE0 = 12,
        OVERTIME_WAGE1 = 11.55,
        OVERTIME_WAGE2 = 7,
        MAX_HOUR = 40;
    double  salary, total, hours, overtime;

    total = 0;

    std::cout << "Employee type: ";
    std::cin >> type;
    std::cout << "Hours of work: ";
    std::cin >> hours;

    while (1)
    {
        if (hours > MAX_HOUR)
        {
            overtime = hours - MAX_HOUR;
            hours = hours - overtime;
        }
        else
        {
            overtime = 0;
        }
        
        switch(type)
        {
            case 0:
                salary = BASE0 + hours * HOURLY_WAGE0 + overtime * OVERTIME_WAGE0;
                break;
            case 1:
                salary = BASE1 + hours * HOURLY_WAGE1 + overtime * OVERTIME_WAGE1;
                break;
            case 2:
                 salary = BASE2 + hours * HOURLY_WAGE2 + overtime * OVERTIME_WAGE2;
                break;
                
        }
        total += salary;
        
        std::cout << std::fixed << std::setprecision(2)
                  << "Salary: $" << salary << std::endl;
        std::cout << std::fixed << std::setprecision(2)
                  << "Total: $" << total << std::endl << std::endl;

        std::cout << "Employee type: ";
        std::cin >> type;
        if (type == -1)break;
        std::cout << "Hours of work: ";
        std::cin >> hours;
        if (hours == -1)break;
    }
    
      
    return 0;
}
