#include <iostream>
#include "Person.h"
#include "Student.h"
#include "Employee.h"
#include "Faculty.h"
using namespace std;

int main()
{
    Person p("Steve", "Brazil", "(51)33246057", "steve@email.com");
    cout << p.toString() << endl;

    cout << endl;

    Student s("Iago", "Sophomore");
    cout << s.toString() << endl;

    cout << endl;

    Employee e("Erwin");
    cout << e.toString() << endl;
    
    cout << endl;

    Faculty f("Jamie", "9am-9pm", "Professor");
    cout << f.toString() << endl;
}
