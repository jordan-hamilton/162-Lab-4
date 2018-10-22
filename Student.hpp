/*********************************************************************
** Description: Specification file for the Student class.
*********************************************************************/

#ifndef STUDENT_HPP
#define STUDENT_HPP

#include <iomanip>

#include "Person.hpp"

class Student : public Person {

  public:
    Student() : Person() {
      setGPA(-1.0);
    };
    Student(std::string studentName) : Person(studentName) {
      randomizeGPA();
    };
    virtual void do_work() override;
    virtual void printScore() override;
    void randomizeGPA();
    double getGPA();
    void setGPA(double studentGPA);

  private:
    double GPA;

};

#endif
