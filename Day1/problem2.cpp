#include <iostream>
using namespace std;

class Employee
{
private:
    int id, salary;
    string firstName, lastName;

public:
    Employee(int id, string firstName, string lastName, int salary)
    {
        this->id = id;
        this->firstName = firstName;
        this->lastName = lastName;
        this->salary = salary;
    };
    int get_ID()
    {
        return id;
    };
    string get_first_name()
    {
        return firstName;
    };
    string get_last_name()
    {
        return lastName;
    };
    string get_name()
    {
        return firstName + " " + lastName;
    };
    int get_salary()
    {
        return salary;
    };
    void set_salary(int salary)
    {
        this->salary = salary;
    };
    int get_annual_salary()
    {
        return salary * 12;
    };
    int raise_salary(int percent)
    {
        this->salary = salary * percent + salary;
        return salary;
    };
};

int main()
{
    Employee e1(123, "Ahmed", "mohamed", 4000);
    cout << "Employee Name: " << e1.get_name() << " and his ID: " << e1.get_ID() << " with annual salary: " << e1.get_annual_salary() << "\n";
}