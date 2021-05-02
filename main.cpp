#include <iostream>
#include "Person.h"

using namespace std;

int main()
{
    Person person("Iago", "Brazil", "(51)33246057", "iago@email.com");
    cout << person.toString() << endl;
}
