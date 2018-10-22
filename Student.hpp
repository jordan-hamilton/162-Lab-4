/*********************************************************************
** Description: Specification file for the Student class.
*********************************************************************/

#ifndef STUDENT_HPP
#define STUDENT_HPP

#include "Person.hpp"

class Student : public Person {

  public:
    virtual void do_work() override;
    virtual void printScore() override;
    double getGPA();
    void setGPA(double studentGPA);

  private:
    double GPA;

};

#endif
