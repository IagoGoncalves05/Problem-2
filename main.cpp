#include <iostream>
#include "Person.h"
#include "Student.h"
#include "Employee.h"
using namespace std;

int main()
{
    Person p("Iago", "Brazil", "(51)33246057", "iago@email.com");
    cout << p.toString() << endl;

    cout << endl;

    Student s("Iago", "Sophomore");
    cout << s.toString() << endl;

    cout << endl;

    Employee e("Iago");
    cout << e.toString() << endl;
}
