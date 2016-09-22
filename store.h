#ifndef _STORE_H
#define _STORE_H

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
        char *getName() { return name; }
        char *getAddress() { return address }
        int getId() { return id; }
        void addEmployee(const char*, const char*, const char*, double, int);
        void removeEmployee(const char*);
        void changeEmployee(const char*, const char*, double);
        void setName(const char* n) { name = new char[strlen(n) + 1]; }
        void setAddress(const char* a) { address = new char[strlen(a) + 1]; }
        void setId(int i) { id = i }
};

#endif
