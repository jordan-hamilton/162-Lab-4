/*********************************************************************
** Description: Specification file for the Instructor class.
*********************************************************************/

#ifndef INSTRUCTOR_HPP
#define INSTRUCTOR_HPP

#include "Person.hpp"

class Instructor : public Person {

  public:
    virtual void do_work() override;
    virtual void printScore() override;
    double getRating();
    void setRating(double instructorRating);

  private:
    double rating;


};

#endif
