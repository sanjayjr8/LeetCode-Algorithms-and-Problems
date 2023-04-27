#include<iostream>
using namespace std;
void getInfo(float &salary, int &workHoursPerDay)
{
    cout << "Enter the salary of the employee: ";
    cin >> salary;
    cout << "Enter the number of hours of work per day of the employee: ";
    cin >> workHoursPerDay;
}
void AddSal(float &salary) 
{
    if (salary < 500) 
    {
        salary += 10;
    }
}
void AddWork(float &salary, int workHoursPerDay) 
{
    if (workHoursPerDay > 6) 
    {
        salary += 5;
    }
}
void printSalary(float salary) 
{
    cout << "Final Salary: " << salary << endl;
}
int main() 
{
    float salary;
    int workHoursPerDay;
    getInfo(salary, workHoursPerDay);
    AddSal(salary);
    AddWork(salary, workHoursPerDay);
    printSalary(salary);
    return 0;
}
