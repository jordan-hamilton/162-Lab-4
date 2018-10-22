#include "Student.hpp"

using std::cout;
using std::endl;
using std::fixed;
using std::rand;
using std::setprecision;


/***********************************************************************************************
** Description: Outputs a message to the screen with a random number of hours between 1 and 8
** indicating the amount of work completed.
***********************************************************************************************/
void Student::do_work() {
  int work = rand() % 8 + 1;
  cout << this->getName() << " did " << work << " hours of homework." << endl;
}


/***********************************************************************************************
** Description: Outputs the student's GPA only to the screen.
***********************************************************************************************/
void Student::printScore() {
  cout << fixed << setprecision(1) << "GPA: " << getGPA();
}


/***********************************************************************************************
** Description: Generates two random numbers, one representing a whole number and one for a
** fraction. If the whole number is the maximum GPA, the setGPA function is called with the
** maximum GPA. Otherwise, the fraction is divided by 10.0 to result in a double that is added
** to the whole number and passed to the setGPA function.
***********************************************************************************************/
void Student::randomizeGPA() {

  int whole = rand() % 5;
  int decimal = rand() % 10;

  if (whole == 4) {
    setGPA(whole);
  } else {
    setGPA(whole + decimal / 10.0);
  }

}


/***********************************************************************************************
** Description: Returns a double representing the student's GPA.
***********************************************************************************************/
double Student::getGPA() {
  return GPA;
}


/***********************************************************************************************
** Description: Takes a double and assigns the student's GPA.
***********************************************************************************************/
void Student::setGPA(double studentGPA) {
  GPA = studentGPA;
}
