#include "Instructor.hpp"

using std::cout;
using std::endl;
using std::fixed;
using std::rand;
using std::setprecision;


/***********************************************************************************************
** Description: Outputs a message to the screen with a random number of hours between 1 and 8
** indicating the amount of work completed.
***********************************************************************************************/
void Instructor::do_work() {
  int work = rand() % 8 + 1;
  cout << this->getName() << " graded papers for " << work << " hours." << endl;
}


/***********************************************************************************************
** Description: Outputs the instructor's rating only to the screen.
***********************************************************************************************/
void Instructor::printScore() {
  cout << fixed << setprecision(1) << "Rating: " << getRating() << endl;
}


/***********************************************************************************************
** Description: Generates two random numbers, one representing a whole number and one for a
** fraction. If the whole number is the maximum rating, the setRating function is called with
** the maximum rating. Otherwise, the fraction is divided by 10.0 to result in a double that is
** added to the whole number and passed to the setRating function.
***********************************************************************************************/
void Instructor::randomizeRating() {

  int whole = rand() % 6;
  int decimal = rand() % 10;

  if (whole == 5) {
    setRating(whole);
  } else {
    setRating(whole + decimal / 10.0);
  }

}


/***********************************************************************************************
** Description: Returns a double representing the instructor's rating.
***********************************************************************************************/
double Instructor::getRating() {
  return rating;
}


/***********************************************************************************************
** Description: Takes a double and assigns the instructor's rating.
***********************************************************************************************/
void Instructor::setRating(double instructorRating) {
  rating = instructorRating;
}
