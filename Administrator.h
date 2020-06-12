/* This is the header file for Administrator class */
/* Please finish the definition of the class to provide the following additional members:
 *  1. a string type member variable to store the title (director, Vice President, ... )
 *  3. Constructor functions: one default one, another taking necessary info. about the administrator: name, SSN, salary, title
 *  4. redefine print_check() so that the title is printed on the check. Start with the version from 
 *  SalariedEmployee
 */
#ifndef ADMINISTRATOR_H
#define ADMINISTRATOR_H

#include "SalariedEmployee.h"
#include "Employee.h"

class Administrator:public SalariedEmployee
{
  public:
	// ToDo: declare default constructor for Administrator
    Administrator();
    
	// ToDo: declare constructor for Administrator that takes a name, SSN, salary, title
	Administrator(string name, string SSN, double salary, string title);
	
	// Accessor for job title
	string get_job_title() const;
	void set_job_title(string title);
    
	// ToDo: declare the virtual functions
    virtual double get_net_pay() const;
    virtual void print_check();
    virtual double get_salary() const;
    
  private: 
	// ToDo: declare a job title member
	string job_title;
};

#endif
