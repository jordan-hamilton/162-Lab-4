#include "Instructor.hpp"

using std::cout;
using std::endl;
using std::fixed;
using std::rand;
using std::setprecision;

void Instructor::do_work() {
  int work = rand() % 9 + 1;
  cout << this->getName() << "graded papers for " << work << "hours." << endl;
}


void Instructor::printScore() {
  cout << fixed << setprecision(1) << "Rating: " << getRating() << endl;
}

void Instructor::randomizeRating() {

  int whole = rand() % 6;
  int decimal = rand() % 10;

  if (whole == 5) {
    setRating(5.0);
  } else {
    setRating(whole + decimal / 10.0);
  }

}


double Instructor::getRating() {
  return rating;
}


void Instructor::setRating(double instructorRating) {
  rating = instructorRating;
}
