/* Implement Administrator class */
#include <iostream>
#include "Administrator.h"
#include "Employee.h"

using namespace std;

Administrator::Administrator():SalariedEmployee(), job_title("No title yet")
{
	// deliberately empty
}

// ToDo: implement the constructor
Administrator::Administrator(string name, string SSN, double salary, string title)
    :SalariedEmployee(name, SSN, salary), job_title(title)
{
    // deliberately empty
    //cout << "Adminstrator(" << name << "," << SSN << "," << salary << "," << title << ")\n";
}
// ToDo: implement the print_check() function
void Administrator::print_check() 
{
    SalariedEmployee::print_check();
    cout << "Administrator Title: " << job_title << endl;
}

// Return the job title
string Administrator::get_job_title() const
{
    return job_title;
}

// Set the administrator title
void Administrator::set_job_title(string title)
{
    job_title = title;
}

// get_salary()- get the salary
double Administrator::get_salary() const
{
    return salary;
}

// get_net_pay()- return the net_pay calculation
double Administrator::get_net_pay() const
{
    return salary;
}

