#ifndef _EMPLOYEE_H
#define _EMPLOYEE_H

#include "employee.h"
#include <vector>

class Store {
    private:
        std::vector<Employee*> employees;   //list of employees
        char *name;                         //name of store
        char *address;                      //current address of store
        int id;                             //id of store
    public:
        Store(const char*, const char*, int);
        ~Store();
};

#endif
