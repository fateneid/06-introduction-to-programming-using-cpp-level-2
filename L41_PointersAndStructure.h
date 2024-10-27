#pragma once

#include <iostream>
using namespace std;

namespace L41_PointersAndStructure {

    struct stEmployee
    {
        string Name;
        float Salary;
    };

    void Task() {

        stEmployee Employee, * ptr;

        Employee.Name = "Faten Eid";
        Employee.Salary = 20000;

        cout << Employee.Name << endl;
        cout << Employee.Salary << endl;

        ptr = &Employee;

        cout << "\nUsing Pointer:\n";
        cout << ptr->Name << endl;
        cout << ptr->Salary << endl;

        /*
        To get the value of a struct : p->struct
        To get the address of a struct: &(p->struct)
        */

        //cout << "\nAddress:\n";
        //cout << &ptr->Name << endl;
        //cout << &ptr->Salary << endl;

        /*   int a = 7;
        cout << a << endl;
        cout << &a << endl;
        int *p = &a;
        cout << p << endl;
        cout << *p << endl;*/


    }



}
