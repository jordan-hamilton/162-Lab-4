#include "Instructor.hpp"

using std::cout;
using std::endl;
using std::rand;

void Instructor::do_work() {
  int work = rand() % 9 + 1;
  cout << this->getName() << "graded papers for " << work << "hours." << endl;
}


void Instructor::printScore() {
  cout << "Rating: " << getRating() << endl;
}


double Instructor::getRating() {
  return rating;
}


void Instructor::setRating(double instructorRating) {
  rating = instructorRating;
}
