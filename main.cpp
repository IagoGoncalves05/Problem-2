#include <iostream>
#include <string>
#include "Person.h"
#include "Student.h"
#include "Employee.h"
#include "Faculty.h"
#include "Staff.h"
using namespace std;

int main()
{
    Person p("Iago");
    cout << p.toString() << endl;

    cout << endl;

    Student s("Iago", "Sophomore");
    cout << s.toString() << endl;

    cout << endl;

    Employee e("Iago");
    cout << e.toString() << endl;

    cout << endl;

    Faculty f("Iago", "9am-9pm", "Professor");
    cout << f.toString() << endl;

    cout << endl; 

    Staff st("Cyra", "Monitor");
    cout << st.toString() << endl;
}

