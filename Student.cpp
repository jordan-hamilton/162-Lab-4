#include "Student.hpp"

using std::cout;
using std::endl;
using std::fixed;
using std::rand;
using std::setprecision;

void Student::do_work() {
  int work = rand() % 9 + 2;
  cout << this->getName() << "did " << work << "hours of homework." << endl;
}


void Student::printScore() {
  cout << fixed << setprecision(1) << "GPA: " << getGPA();
}

void Student::randomizeGPA() {

  int whole = rand() % 5;
  int decimal = rand() % 10;

  if (whole == 4) {
    setGPA(4.0);
  } else {
    setGPA(whole + decimal / 10.0);
  }

}


double Student::getGPA() {
  return GPA;
}


void Student::setGPA(double studentGPA) {
  GPA = studentGPA;
}
