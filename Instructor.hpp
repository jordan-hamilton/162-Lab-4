/*********************************************************************
** Description: Specification file for the Instructor class.
*********************************************************************/

#ifndef INSTRUCTOR_HPP
#define INSTRUCTOR_HPP

#include <iomanip>

#include "Person.hpp"

class Instructor : public Person {

  public:
    Instructor() : Person() {
      setRating(-1.0);
    };
    Instructor(std::string instructorName) : Person(instructorName) {
      randomizeRating();
    };
    virtual void do_work() override;
    virtual void printScore() override;
    void randomizeRating();
    double getRating();
    void setRating(double instructorRating);

  private:
    double rating;


};

#endif
