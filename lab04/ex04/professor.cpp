#include <iostream>
#include <memory>
#include <string>
using namespace std;

class Faculty
{
private:
    Discipline department;

public:
};

class Student
{
private:
public:
};

class Person
{
private:
    string name;

public:
    Person();
    Person(pName : const string &);
    setName(pName : const string &);
    getName() const : string;
};

int main()
{
    shared_ptr<Faculty>
        prof = make_shared<Faculty>("Indiana Jones",
                                    Discipline::ARCHEOLOGY);
    shared_ptr<Student>
        st = make_shared<Student>("Sean Bolster",
                                  Discipline::ARCHEOLOGY, prof);
    cout << "Professor " << prof->getName() << " teaches "
         << dName[static_cast<int>(prof->getDepartment())]
         << "." << endl;
    shared_ptr<Person> pAdvisor = st->getAdvisor();
    cout << st->getName() << "\'s advisor is "
         << pAdvisor->getName() << ".";
    cout << endl;
    return 0;
}