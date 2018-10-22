/*********************************************************************
** Description: Specification file for the Person class.
*********************************************************************/

#ifndef PERSON_HPP
#define PERSON_HPP

#include <cstdlib>
#include <iostream>
#include <string>

class Person {

  public:
    Person();
    Person(int personAge, std::string personName);
    virtual ~Person();
    virtual void do_work() = 0;
    virtual void printScore() = 0;
    int getAge();
    std::string getName();
    void setAge(int personAge);
    void setName(std::string personName);

  protected:
    std::string name;
    int age;

};

#endif
